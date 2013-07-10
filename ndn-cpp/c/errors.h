/**
 * Define error codes and ndn_getErrorString to convert to a string.
 * @author, Jeff Thompson
 * See COPYING for copyright and distribution information.
 */

#ifndef NDN_ERRORS_H
#define	NDN_ERRORS_H

#ifdef	__cplusplus
extern "C" {
#endif

typedef enum {
  NDN_ERROR_success = 0,
  NDN_ERROR_element_of_value_is_not_a_decimal_digit,
  NDN_ERROR_read_past_the_end_of_the_input,
  NDN_ERROR_the_first_header_octet_may_not_be_zero,
  NDN_ERROR_header_type_is_not_a_DTAG,
  NDN_ERROR_did_not_get_the_expected_DTAG,
  NDN_ERROR_did_not_get_the_expected_element_close,
  NDN_ERROR_item_is_not_UDATA,
  NDN_ERROR_header_type_is_out_of_range,
  NDN_ERROR_encodeTypeAndValue_miscalculated_N_encoding_bytes,
  NDN_ERROR_read_a_component_past_the_maximum_number_of_components_allowed_in_the_name,
  NDN_ERROR_read_an_entry_past_the_maximum_number_of_entries_allowed_in_the_exclude,
  NDN_ERROR_findElementEnd_unexpected_close_tag,
  NDN_ERROR_cannot_store_more_header_bytes_than_the_size_of_headerBuffer,
  NDN_ERROR_findElementEnd_cannot_read_header_type_and_value,
  NDN_ERROR_findElementEnd_unrecognized_header_type,
  NDN_ERROR_findElementEnd_unrecognized_state,
  NDN_ERROR_DynamicUCharArray_realloc_function_pointer_not_supplied,
  NDN_ERROR_DynamicUCharArray_realloc_failed,
  NDN_ERROR_unrecognized_ndn_ExcludeType
} ndn_Error;
  
/**
 * Convert the error code to its string.
 * @param error the error code
 * @return the error string or "unrecognized ndn_Error code"
 */
char *ndn_getErrorString(int error);

#ifdef	__cplusplus
}
#endif

#endif