/* Rebuilt from lomse.exe FUN_00475710 @ 0x00475710 (2004 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define s_A_DirectDraw_object_representing_00559c14 (*(char (*)[])0x00559c14)
#define s_A_hardware_only_DirectDraw_objec_005598c0 (*(char (*)[])0x005598c0)
#define s_A_new_group_cannot_be_created__00558f90 (*(char (*)[])0x00558f90)
#define s_A_new_player_cannot_be_created__00558f6c (*(char (*)[])0x00558f6c)
#define s_A_new_session_cannot_be_created__00558f48 (*(char (*)[])0x00558f48)
#define s_A_player_has_lost_the_connection_00558abc (*(char (*)[])0x00558abc)
#define s_Access_to_surface_refused_becaus_0055a08c (*(char (*)[])0x0055a08c)
#define s_Access_to_this_palette_is_being_r_0055a274 (*(char (*)[])0x0055a274)
#define s_Access_to_this_surface_is_being_r_00559fe4 (*(char (*)[])0x00559fe4)
#define s_Access_to_this_surface_is_being_r_0055a0c8 (*(char (*)[])0x0055a0c8)
#define s_Action_not_supported__0055ae88 (*(char (*)[])0x0055ae88)
#define s_An_attempt_has_been_made_to_flip_005596c0 (*(char (*)[])0x005596c0)
#define s_An_attempt_was_made_to_set_a_cli_00559c70 (*(char (*)[])0x00559c70)
#define s_An_attempt_was_made_to_set_the_c_00559bbc (*(char (*)[])0x00559bbc)
#define s_An_exception_occurred_when_proce_00558e2c (*(char (*)[])0x00558e2c)
#define s_An_exception_was_encountered_whi_0055ad54 (*(char (*)[])0x0055ad54)
#define s_An_unknown_application_was_speci_005589c8 (*(char (*)[])0x005589c8)
#define s_Bitmask_in_the_pixel_format_requ_00559e84 (*(char (*)[])0x00559e84)
#define s_Can_only_have_ony_color_key_acti_0055a234 (*(char (*)[])0x0055a234)
#define s_Can_t_duplicate_primary___3D_sur_00559cd0 (*(char (*)[])0x00559cd0)
#define s_Cannot_start_the_application__00558a44 (*(char (*)[])0x00558a44)
#define s_Clipper_notification_requires_an_00559834 (*(char (*)[])0x00559834)
#define s_Create_function_called_without_D_0055aa00 (*(char (*)[])0x0055aa00)
#define s_D3DERR_BADMAJORVERSION_005594ec (*(char (*)[])0x005594ec)
#define s_D3DERR_BADMINORVERSION_005594d4 (*(char (*)[])0x005594d4)
#define s_D3DERR_EXECUTE_CLIPPED_FAILED_005593ec (*(char (*)[])0x005593ec)
#define s_D3DERR_EXECUTE_CREATE_FAILED_005594b4 (*(char (*)[])0x005594b4)
#define s_D3DERR_EXECUTE_DESTROY_FAILED_00559460 (*(char (*)[])0x00559460)
#define s_D3DERR_EXECUTE_FAILED_0055940c (*(char (*)[])0x0055940c)
#define s_D3DERR_EXECUTE_LOCKED_0055949c (*(char (*)[])0x0055949c)
#define s_D3DERR_EXECUTE_LOCK_FAILED_00559444 (*(char (*)[])0x00559444)
#define s_D3DERR_EXECUTE_NOT_LOCKED_00559480 (*(char (*)[])0x00559480)
#define s_D3DERR_EXECUTE_UNLOCK_FAILED_00559424 (*(char (*)[])0x00559424)
#define s_D3DERR_LIGHT_SET_FAILED_00559208 (*(char (*)[])0x00559208)
#define s_D3DERR_MATERIAL_CREATE_FAILED_00559264 (*(char (*)[])0x00559264)
#define s_D3DERR_MATERIAL_DESTROY_FAILED_00559244 (*(char (*)[])0x00559244)
#define s_D3DERR_MATERIAL_SETDATA_FAILED_00559224 (*(char (*)[])0x00559224)
#define s_D3DERR_MATRIX_CREATE_FAILED_005592e4 (*(char (*)[])0x005592e4)
#define s_D3DERR_MATRIX_DESTROY_FAILED_005592c4 (*(char (*)[])0x005592c4)
#define s_D3DERR_MATRIX_SETDATA_FAILED_005592a4 (*(char (*)[])0x005592a4)
#define s_D3DERR_SETVIEWPORTDATA_FAILED_00559284 (*(char (*)[])0x00559284)
#define s_D3DERR_TEXTURELOCKED_0055939c (*(char (*)[])0x0055939c)
#define s_D3DERR_TEXTURE_CREATE_FAILED_0055937c (*(char (*)[])0x0055937c)
#define s_D3DERR_TEXTURE_DESTROY_FAILED_0055935c (*(char (*)[])0x0055935c)
#define s_D3DERR_TEXTURE_LOAD_FAILED_00559304 (*(char (*)[])0x00559304)
#define s_D3DERR_TEXTURE_LOCK_FAILED_00559340 (*(char (*)[])0x00559340)
#define s_D3DERR_TEXTURE_NOT_LOCKED_005593b4 (*(char (*)[])0x005593b4)
#define s_D3DERR_TEXTURE_NO_SUPPORT_005593d0 (*(char (*)[])0x005593d0)
#define s_D3DERR_TEXTURE_UNLOCK_FAILED_00559320 (*(char (*)[])0x00559320)
#define s_D3DRMERR_BADALLOC_005591cc (*(char (*)[])0x005591cc)
#define s_D3DRMERR_BADDEVICE_00559148 (*(char (*)[])0x00559148)
#define s_D3DRMERR_BADFILE_0055915c (*(char (*)[])0x0055915c)
#define s_D3DRMERR_BADMAJORVERSION_00559118 (*(char (*)[])0x00559118)
#define s_D3DRMERR_BADMINORVERSION_005590fc (*(char (*)[])0x005590fc)
#define s_D3DRMERR_BADOBJECT_005591f4 (*(char (*)[])0x005591f4)
#define s_D3DRMERR_BADTYPE_005591e0 (*(char (*)[])0x005591e0)
#define s_D3DRMERR_BADVALUE_00559134 (*(char (*)[])0x00559134)
#define s_D3DRMERR_FACEUSED_005591b8 (*(char (*)[])0x005591b8)
#define s_D3DRMERR_NOTDONEYET_0055918c (*(char (*)[])0x0055918c)
#define s_D3DRMERR_NOTFOUND_005591a4 (*(char (*)[])0x005591a4)
#define s_D3DRMERR_UNABLETOEXECUTE_005590e0 (*(char (*)[])0x005590e0)
#define s_DirectDrawSurface_is_not_in_4_bi_0055a58c (*(char (*)[])0x0055a58c)
#define s_DirectDrawSurface_is_not_in_4_bi_0055a604 (*(char (*)[])0x0055a604)
#define s_DirectDrawSurface_is_not_in_8_bi_0055a52c (*(char (*)[])0x0055a52c)
#define s_DirectDraw_does_not_have_enough_m_0055a2d8 (*(char (*)[])0x0055a2d8)
#define s_DirectDraw_does_not_support_the_p_0055ac44 (*(char (*)[])0x0055ac44)
#define s_DirectDraw_does_not_support_the_r_0055ac10 (*(char (*)[])0x0055ac10)
#define s_DirectDraw_received_a_pointer_th_0055abc8 (*(char (*)[])0x0055abc8)
#define s_FOURCC_format_requested_is_unsup_00559ecc (*(char (*)[])0x00559ecc)
#define s_Flipping_visible_surfaces_is_not_0055a890 (*(char (*)[])0x0055a890)
#define s_Generic_failure__0055aec4 (*(char (*)[])0x0055aec4)
#define s_HWND_used_by_DirectDraw_Cooperat_00559ad0 (*(char (*)[])0x00559ad0)
#define s_Height_of_rectangle_provided_is_n_0055ad10 (*(char (*)[])0x0055ad10)
#define s_Height_requested_by_DirectDraw_i_00559f8c (*(char (*)[])0x00559f8c)
#define s_Informs_DirectDraw_that_the_prev_00559df0 (*(char (*)[])0x00559df0)
#define s_No_DC_was_ever_created_for_this_s_00559948 (*(char (*)[])0x00559948)
#define s_No_DirectDraw_ROP_hardware__00559928 (*(char (*)[])0x00559928)
#define s_No_blitter_hardware_present__005599a4 (*(char (*)[])0x005599a4)
#define s_No_cliplist_available__0055aa88 (*(char (*)[])0x0055aa88)
#define s_No_clipper_object_attached_to_su_00559974 (*(char (*)[])0x00559974)
#define s_No_communication_link_was_establ_00558cf8 (*(char (*)[])0x00558cf8)
#define s_No_error__005589a0 (*(char (*)[])0x005589a0)
#define s_No_hardware_support_for_16_or_25_0055974c (*(char (*)[])0x0055974c)
#define s_No_name_server__host__could_be_f_00558ca0 (*(char (*)[])0x00558ca0)
#define s_No_palette_object_attached_to_th_00559780 (*(char (*)[])0x00559780)
#define s_No_src_color_key_specified_for_t_0055a1d0 (*(char (*)[])0x0055a1d0)
#define s_One_or_more_of_the_caps_bits_pas_0055ac78 (*(char (*)[])0x0055ac78)
#define s_One_or_more_of_the_parameters_pa_0055ae40 (*(char (*)[])0x0055ae40)
#define s_Operation_could_not_be_carried_o_0055a3ec (*(char (*)[])0x0055a3ec)
#define s_Operation_could_not_be_carried_o_0055a44c (*(char (*)[])0x0055a44c)
#define s_Operation_could_not_be_carried_o_0055a4c4 (*(char (*)[])0x0055a4c4)
#define s_Operation_could_not_be_carried_o_0055a670 (*(char (*)[])0x0055a670)
#define s_Operation_could_not_be_carried_o_0055a6cc (*(char (*)[])0x0055a6cc)
#define s_Operation_could_not_be_carried_o_0055a72c (*(char (*)[])0x0055a72c)
#define s_Operation_could_not_be_carried_o_0055a79c (*(char (*)[])0x0055a79c)
#define s_Operation_could_not_be_carried_o_0055a81c (*(char (*)[])0x0055a81c)
#define s_Operation_could_not_be_carried_o_0055a930 (*(char (*)[])0x0055a930)
#define s_Operation_could_not_be_carried_o_0055a998 (*(char (*)[])0x0055a998)
#define s_Operation_could_not_be_carried_o_0055aaa0 (*(char (*)[])0x0055aaa0)
#define s_Operation_could_not_be_carried_o_0055ab28 (*(char (*)[])0x0055ab28)
#define s_Operation_requires_the_applicati_0055a8c0 (*(char (*)[])0x0055a8c0)
#define s_Overlay_surfaces_could_not_be_z_l_0055a36c (*(char (*)[])0x0055a36c)
#define s_Rectangle_provided_was_invalid__0055ab78 (*(char (*)[])0x0055ab78)
#define s_Rectangle_provided_was_not_horiz_00559da8 (*(char (*)[])0x00559da8)
#define s_Region_passed_to_Clipper__GetCli_00559554 (*(char (*)[])0x00559554)
#define s_Requested_item_was_not_found__0055a7fc (*(char (*)[])0x0055a7fc)
#define s_Return_if_a_clipper_object_is_at_00559d4c (*(char (*)[])0x00559d4c)
#define s_Returned_by_the_IDirectPlayLobby_00558914 (*(char (*)[])0x00558914)
#define s_Returned_when_GetOverlayPosition_005595c4 (*(char (*)[])0x005595c4)
#define s_Returned_when_GetOverlayPosition_005597b0 (*(char (*)[])0x005597b0)
#define s_Returned_when_an_overlay_member_i_00559704 (*(char (*)[])0x00559704)
#define s_Returned_when_the_position_of_th_005599c4 (*(char (*)[])0x005599c4)
#define s_Size_requested_by_DirectDraw_is_t_00559f34 (*(char (*)[])0x00559f34)
#define s_Software_emulation_not_available_0055989c (*(char (*)[])0x0055989c)
#define s_Support_is_currently_not_availab_0055ad9c (*(char (*)[])0x0055ad9c)
#define s_Surface_doesn_t_currently_have_a_0055aa5c (*(char (*)[])0x0055aa5c)
#define s_Surface_was_not_locked__An_attem_00559640 (*(char (*)[])0x00559640)
#define s_The_CooperativeLevel_HWND_has_al_00559b40 (*(char (*)[])0x00559b40)
#define s_The_DirectPlay_message_queue_is_f_00558b4c (*(char (*)[])0x00558b4c)
#define s_The_DirectPlay_object_pointer_is_00558dd0 (*(char (*)[])0x00558dd0)
#define s_The_GUID_passed_to_DirectDrawCre_00559a2c (*(char (*)[])0x00559a2c)
#define s_The_application_has_not_been_sta_00558a18 (*(char (*)[])0x00558a18)
#define s_The_capabilities_of_the_DirectPl_00558e60 (*(char (*)[])0x00558e60)
#define s_The_communication_link_that_Dire_00558d20 (*(char (*)[])0x00558d20)
#define s_The_connection_to_the_session_ha_00558a8c (*(char (*)[])0x00558a8c)
#define s_The_data_buffer_is_too_large_to_s_00558a64 (*(char (*)[])0x00558a64)
#define s_The_file_was_not_found__00559170 (*(char (*)[])0x00559170)
#define s_The_flags_passed_to_this_functio_00558dfc (*(char (*)[])0x00558dfc)
#define s_The_hardware_does_not_support_cl_0055a200 (*(char (*)[])0x0055a200)
#define s_The_hardware_needed_for_the_requ_0055a31c (*(char (*)[])0x0055a31c)
#define s_The_interface_is_not_supported__0055aea0 (*(char (*)[])0x0055aea0)
#define s_The_interface_parameter_is_inval_005589f0 (*(char (*)[])0x005589f0)
#define s_The_message_buffer_passed_to_the_00558bec (*(char (*)[])0x00558bec)
#define s_The_operation_could_not_be_compl_00558bac (*(char (*)[])0x00558bac)
#define s_The_pixel_format_was_invalid_as_s_0055ab9c (*(char (*)[])0x0055ab9c)
#define s_The_player_ID_is_not_recognized_a_00558d80 (*(char (*)[])0x00558d80)
#define s_The_player_cannot_be_added_to_th_00558fb0 (*(char (*)[])0x00558fb0)
#define s_The_requested_function_is_not_av_00558b74 (*(char (*)[])0x00558b74)
#define s_The_requested_operation_cannot_b_00559024 (*(char (*)[])0x00559024)
#define s_The_requested_surface_is_not_att_00559fbc (*(char (*)[])0x00559fbc)
#define s_The_session_is_full_or_an_incorr_0055907c (*(char (*)[])0x0055907c)
#define s_The_supplied_buffer_is_not_large_00558fdc (*(char (*)[])0x00558fdc)
#define s_The_surface_being_used_is_not_a_p_00559608 (*(char (*)[])0x00559608)
#define s_The_user_canceled_the_connection_00558af0 (*(char (*)[])0x00558af0)
#define s_There_are_no_active_players_in_t_00558c70 (*(char (*)[])0x00558c70)
#define s_There_are_no_existing_sessions_f_00558c40 (*(char (*)[])0x00558c40)
#define s_There_is_no_3D_present__0055ab0c (*(char (*)[])0x0055ab0c)
#define s_There_is_no_GDI_present__0055a874 (*(char (*)[])0x0055a874)
#define s_This_object_is_already_initializ_005590b8 (*(char (*)[])0x005590b8)
#define s_This_process_already_has_created_0055958c (*(char (*)[])0x0055958c)
#define s_This_surface_can_not_be_attached_0055ae04 (*(char (*)[])0x0055ae04)
#define s_This_surface_can_not_be_detached_0055adc4 (*(char (*)[])0x0055adc4)
#define s_This_surface_can_not_be_restored_00559504 (*(char (*)[])0x00559504)
#define s_This_surface_can_not_be_restored_00559a80 (*(char (*)[])0x00559a80)
#define s_This_surface_is_already_a_depend_0055a12c (*(char (*)[])0x0055a12c)
#define s_This_surface_is_already_attached_0055a184 (*(char (*)[])0x0055a184)
#define s_Unable_to_match_primary_surface_c_0055acbc (*(char (*)[])0x0055acbc)
#define s_Unrecognized_error_value__005589ac (*(char (*)[])0x005589ac)
#define s_Vertical_blank_is_in_progress__00559e64 (*(char (*)[])0x00559e64)
#define s_Width_requested_by_DirectDraw_is_00559f04 (*(char (*)[])0x00559f04)
#define s_Windows_can_not_create_any_more_D_00559d24 (*(char (*)[])0x00559d24)

#define LOM_SELF_00475710 1
char * __cdecl rb_00475710(int param_1)

{
  if (param_1 < -0x7ff8fff1) {
    if (param_1 == -0x7ff8fff2) {
LAB_004759be:
      return s_DirectDraw_does_not_have_enough_m_0055a2d8;
    }
    if (param_1 == -0x7fffbfff) {
      return s_Action_not_supported__0055ae88;
    }
    if (param_1 == -0x7fffbffe) {
      return s_The_interface_is_not_supported__0055aea0;
    }
    if (param_1 == -0x7fffbffb) {
      return s_Generic_failure__0055aec4;
    }
  }
  else if (param_1 < -0x7789fffa) {
    if (param_1 == -0x7789fffb) {
LAB_00475cf4:
      return s_This_object_is_already_initializ_005590b8;
    }
    if (param_1 == -0x7ff8ffa9) {
      return s_One_or_more_of_the_parameters_pa_0055ae40;
    }
  }
  else if (param_1 < -0x7789ffeb) {
    if (param_1 == -0x7789ffec) {
      return s_This_surface_can_not_be_detached_0055adc4;
    }
    if (param_1 == -0x7789fff6) {
      return s_This_surface_can_not_be_attached_0055ae04;
    }
  }
  else if (param_1 < -0x7789ffc8) {
    if (param_1 == -0x7789ffc9) {
      return s_An_exception_was_encountered_whi_0055ad54;
    }
    if (param_1 == -0x7789ffd8) {
      return s_Support_is_currently_not_availab_0055ad9c;
    }
  }
  else if (param_1 < -0x7789ffa0) {
    if (param_1 == -0x7789ffa1) {
      return s_Unable_to_match_primary_surface_c_0055acbc;
    }
    if (param_1 == -0x7789ffa6) {
      return s_Height_of_rectangle_provided_is_n_0055ad10;
    }
  }
  else if (param_1 < -0x7789ff91) {
    if (param_1 == -0x7789ff92) {
      return s_DirectDraw_does_not_support_the_p_0055ac44;
    }
    if (param_1 == -0x7789ff9c) {
      return s_One_or_more_of_the_caps_bits_pas_0055ac78;
    }
  }
  else if (param_1 < -0x7789ff7d) {
    if (param_1 == -0x7789ff7e) {
      return s_DirectDraw_received_a_pointer_th_0055abc8;
    }
    if (param_1 == -0x7789ff88) {
      return s_DirectDraw_does_not_support_the_r_0055ac10;
    }
  }
  else if (param_1 < -0x7789ff69) {
    if (param_1 == -0x7789ff6a) {
      return s_Rectangle_provided_was_invalid__0055ab78;
    }
    if (param_1 == -0x7789ff6f) {
      return s_The_pixel_format_was_invalid_as_s_0055ab9c;
    }
  }
  else if (param_1 < -0x7789ff55) {
    if (param_1 == -0x7789ff56) {
      return s_There_is_no_3D_present__0055ab0c;
    }
    if (param_1 == -0x7789ff60) {
      return s_Operation_could_not_be_carried_o_0055ab28;
    }
  }
  else if (param_1 < -0x7789ff32) {
    if (param_1 == -0x7789ff33) {
      return s_No_cliplist_available__0055aa88;
    }
    if (param_1 == -0x7789ff4c) {
      return s_Operation_could_not_be_carried_o_0055aaa0;
    }
  }
  else if (param_1 < -0x7789ff23) {
    if (param_1 == -0x7789ff24) {
      return s_Operation_could_not_be_carried_o_0055a930;
    }
    if (param_1 == -0x7789ff2e) {
      return s_Operation_could_not_be_carried_o_0055a998;
    }
    if (param_1 == -0x7789ff2c) {
      return s_Create_function_called_without_D_0055aa00;
    }
    if (param_1 == -0x7789ff29) {
      return s_Surface_doesn_t_currently_have_a_0055aa5c;
    }
  }
  else if (param_1 < -0x7789ff19) {
    if (param_1 == -0x7789ff1a) {
      return s_Flipping_visible_surfaces_is_not_0055a890;
    }
    if (param_1 == -0x7789ff1f) {
      return s_Operation_requires_the_applicati_0055a8c0;
    }
  }
  else if (param_1 < -0x7789ff05) {
    if (param_1 == -0x7789ff06) {
      return s_Operation_could_not_be_carried_o_0055a81c;
    }
    if (param_1 == -0x7789ff10) {
      return s_There_is_no_GDI_present__0055a874;
    }
  }
  else if (param_1 < -0x7789fefb) {
    if (param_1 == -0x7789fefc) {
      return s_Operation_could_not_be_carried_o_0055a79c;
    }
    if (param_1 == -0x7789ff01) {
      return s_Requested_item_was_not_found__0055a7fc;
    }
  }
  else if (param_1 < -0x7789fedd) {
    if (param_1 == -0x7789fede) {
      return s_Operation_could_not_be_carried_o_0055a6cc;
    }
    if (param_1 == -0x7789fee8) {
      return s_Operation_could_not_be_carried_o_0055a72c;
    }
  }
  else if (param_1 < -0x7789fec3) {
    if (param_1 == -0x7789fec4) {
      return s_DirectDrawSurface_is_not_in_4_bi_0055a604;
    }
    if (param_1 == -0x7789feca) {
      return s_Operation_could_not_be_carried_o_0055a670;
    }
  }
  else if (param_1 < -0x7789febf) {
    if (param_1 == -0x7789fec0) {
      return s_DirectDrawSurface_is_not_in_8_bi_0055a52c;
    }
    if (param_1 == -0x7789fec3) {
      return s_DirectDrawSurface_is_not_in_4_bi_0055a58c;
    }
  }
  else if (param_1 < -0x7789feb0) {
    if (param_1 == -0x7789feb1) {
      return s_Operation_could_not_be_carried_o_0055a44c;
    }
    if (param_1 == -0x7789feb6) {
      return s_Operation_could_not_be_carried_o_0055a4c4;
    }
  }
  else if (param_1 < -0x7789fea1) {
    if (param_1 == -0x7789fea2) {
      return s_Overlay_surfaces_could_not_be_z_l_0055a36c;
    }
    if (param_1 == -0x7789feac) {
      return s_Operation_could_not_be_carried_o_0055a3ec;
    }
  }
  else if (param_1 < -0x7789fe83) {
    if (param_1 == -0x7789fe84) goto LAB_004759be;
    if (param_1 == -0x7789fe98) {
      return s_The_hardware_needed_for_the_requ_0055a31c;
    }
  }
  else if (param_1 < -0x7789fe6f) {
    if (param_1 == -0x7789fe70) {
      return s_No_src_color_key_specified_for_t_0055a1d0;
    }
    if (param_1 == -0x7789fe82) {
      return s_The_hardware_does_not_support_cl_0055a200;
    }
    if (param_1 == -0x7789fe80) {
      return s_Can_only_have_ony_color_key_acti_0055a234;
    }
    if (param_1 == -0x7789fe7d) {
      return s_Access_to_this_palette_is_being_r_0055a274;
    }
  }
  else if (param_1 < -0x7789fe5b) {
    if (param_1 == -0x7789fe5c) {
      return s_This_surface_is_already_a_depend_0055a12c;
    }
    if (param_1 == -0x7789fe66) {
      return s_This_surface_is_already_attached_0055a184;
    }
  }
  else if (param_1 < -0x7789fe47) {
    if (param_1 == -0x7789fe48) {
      return s_Access_to_surface_refused_becaus_0055a08c;
    }
    if (param_1 == -0x7789fe52) {
      return s_Access_to_this_surface_is_being_r_0055a0c8;
    }
  }
  else if (param_1 < -0x7789fe33) {
    if (param_1 == -0x7789fe34) {
      return s_The_requested_surface_is_not_att_00559fbc;
    }
    if (param_1 == -0x7789fe3e) {
      return s_Access_to_this_surface_is_being_r_00559fe4;
    }
  }
  else if (param_1 < -0x7789fe1f) {
    if (param_1 == -0x7789fe20) {
      return s_Size_requested_by_DirectDraw_is_t_00559f34;
    }
    if (param_1 == -0x7789fe2a) {
      return s_Height_requested_by_DirectDraw_i_00559f8c;
    }
  }
  else if (param_1 < -0x7789fe01) {
    if (param_1 == -0x7789fe02) {
      return s_FOURCC_format_requested_is_unsup_00559ecc;
    }
    if (param_1 == -0x7789fe16) {
      return s_Width_requested_by_DirectDraw_is_00559f04;
    }
  }
  else if (param_1 < -0x7789fde6) {
    if (param_1 == -0x7789fde7) {
      return s_Vertical_blank_is_in_progress__00559e64;
    }
    if (param_1 == -0x7789fdf8) {
      return s_Bitmask_in_the_pixel_format_requ_00559e84;
    }
  }
  else if (param_1 < -0x7789fdcf) {
    if (param_1 == -0x7789fdd0) {
      return s_Rectangle_provided_was_not_horiz_00559da8;
    }
    if (param_1 == -0x7789fde4) {
      return s_Informs_DirectDraw_that_the_prev_00559df0;
    }
  }
  else if (param_1 < -0x7789fd43) {
    if (param_1 == -0x7789fd44) {
      return s_D3DERR_BADMAJORVERSION_005594ec;
    }
    switch(param_1) {
    case -0x7789fdcf:
      return s_The_GUID_passed_to_DirectDrawCre_00559a2c;
    case -0x7789fdce:
      return s_A_DirectDraw_object_representing_00559c14;
    case -0x7789fdcd:
      return s_A_hardware_only_DirectDraw_objec_005598c0;
    case -0x7789fdcc:
      return s_This_process_already_has_created_0055958c;
    case -0x7789fdcb:
      return s_Software_emulation_not_available_0055989c;
    case -0x7789fdca:
      return s_Region_passed_to_Clipper__GetCli_00559554;
    case -0x7789fdc9:
      return s_An_attempt_was_made_to_set_a_cli_00559c70;
    case -0x7789fdc8:
      return s_No_clipper_object_attached_to_su_00559974;
    case -0x7789fdc7:
      return s_Clipper_notification_requires_an_00559834;
    case -0x7789fdc6:
      return s_HWND_used_by_DirectDraw_Cooperat_00559ad0;
    case -0x7789fdc5:
      return s_The_CooperativeLevel_HWND_has_al_00559b40;
    case -0x7789fdc4:
      return s_No_palette_object_attached_to_th_00559780;
    case -0x7789fdc3:
      return s_No_hardware_support_for_16_or_25_0055974c;
    case -0x7789fdc2:
      return s_Return_if_a_clipper_object_is_at_00559d4c;
    case -0x7789fdc1:
      return s_No_blitter_hardware_present__005599a4;
    case -0x7789fdc0:
      return s_No_DirectDraw_ROP_hardware__00559928;
    case -0x7789fdbf:
      return s_Returned_when_GetOverlayPosition_005595c4;
    case -0x7789fdbe:
      return s_Returned_when_GetOverlayPosition_005597b0;
    case -0x7789fdbd:
      return s_Returned_when_the_position_of_th_005599c4;
    case -0x7789fdbc:
      return s_Returned_when_an_overlay_member_i_00559704;
    case -0x7789fdbb:
      return s_An_attempt_was_made_to_set_the_c_00559bbc;
    case -0x7789fdba:
      return s_An_attempt_has_been_made_to_flip_005596c0;
    case -0x7789fdb9:
      return s_Can_t_duplicate_primary___3D_sur_00559cd0;
    case -0x7789fdb8:
      return s_Surface_was_not_locked__An_attem_00559640;
    case -0x7789fdb7:
      return s_Windows_can_not_create_any_more_D_00559d24;
    case -0x7789fdb6:
      return s_No_DC_was_ever_created_for_this_s_00559948;
    case -0x7789fdb5:
      return s_This_surface_can_not_be_restored_00559504;
    case -0x7789fdb4:
      return s_This_surface_can_not_be_restored_00559a80;
    case -0x7789fdb3:
      return s_The_surface_being_used_is_not_a_p_00559608;
    }
  }
  else if (param_1 < -0x7789fd39) {
    if (param_1 == -0x7789fd3a) {
      return s_D3DERR_EXECUTE_CREATE_FAILED_005594b4;
    }
    if (param_1 == -0x7789fd43) {
      return s_D3DERR_BADMINORVERSION_005594d4;
    }
  }
  else if (param_1 < -0x7789fd11) {
    if (param_1 == -0x7789fd12) {
      return s_D3DERR_LIGHT_SET_FAILED_00559208;
    }
    switch(param_1) {
    case -0x7789fd39:
      return s_D3DERR_EXECUTE_DESTROY_FAILED_00559460;
    case -0x7789fd38:
      return s_D3DERR_EXECUTE_LOCK_FAILED_00559444;
    case -0x7789fd37:
      return s_D3DERR_EXECUTE_UNLOCK_FAILED_00559424;
    case -0x7789fd36:
      return s_D3DERR_EXECUTE_LOCKED_0055949c;
    case -0x7789fd35:
      return s_D3DERR_EXECUTE_NOT_LOCKED_00559480;
    case -0x7789fd34:
      return s_D3DERR_EXECUTE_FAILED_0055940c;
    case -0x7789fd33:
      return s_D3DERR_EXECUTE_CLIPPED_FAILED_005593ec;
    case -0x7789fd30:
      return s_D3DERR_TEXTURE_NO_SUPPORT_005593d0;
    case -0x7789fd2f:
      return s_D3DERR_TEXTURE_CREATE_FAILED_0055937c;
    case -0x7789fd2e:
      return s_D3DERR_TEXTURE_DESTROY_FAILED_0055935c;
    case -0x7789fd2d:
      return s_D3DERR_TEXTURE_LOCK_FAILED_00559340;
    case -0x7789fd2c:
      return s_D3DERR_TEXTURE_UNLOCK_FAILED_00559320;
    case -0x7789fd2b:
      return s_D3DERR_TEXTURE_LOAD_FAILED_00559304;
    case -0x7789fd29:
      return s_D3DERR_TEXTURELOCKED_0055939c;
    case -0x7789fd28:
      return s_D3DERR_TEXTURE_NOT_LOCKED_005593b4;
    case -0x7789fd26:
      return s_D3DERR_MATRIX_CREATE_FAILED_005592e4;
    case -0x7789fd25:
      return s_D3DERR_MATRIX_DESTROY_FAILED_005592c4;
    case -0x7789fd24:
      return s_D3DERR_MATRIX_SETDATA_FAILED_005592a4;
    case -0x7789fd22:
      return s_D3DERR_SETVIEWPORTDATA_FAILED_00559284;
    case -0x7789fd1c:
      return s_D3DERR_MATERIAL_CREATE_FAILED_00559264;
    case -0x7789fd1b:
      return s_D3DERR_MATERIAL_DESTROY_FAILED_00559244;
    case -0x7789fd1a:
      return s_D3DERR_MATERIAL_SETDATA_FAILED_00559224;
    }
  }
  else if (param_1 < -0x7788fffa) {
    if (param_1 == -0x7788fffb) goto LAB_00475cf4;
    switch(param_1) {
    case -0x7789fcf3:
      return s_D3DRMERR_BADOBJECT_005591f4;
    case -0x7789fcf2:
      return s_D3DRMERR_BADTYPE_005591e0;
    case -0x7789fcf1:
      return s_D3DRMERR_BADALLOC_005591cc;
    case -0x7789fcf0:
      return s_D3DRMERR_FACEUSED_005591b8;
    case -0x7789fcef:
      return s_D3DRMERR_NOTFOUND_005591a4;
    case -0x7789fcee:
      return s_D3DRMERR_NOTDONEYET_0055918c;
    case -0x7789fced:
      return s_The_file_was_not_found__00559170;
    case -0x7789fcec:
      return s_D3DRMERR_BADFILE_0055915c;
    case -0x7789fceb:
      return s_D3DRMERR_BADDEVICE_00559148;
    case -0x7789fcea:
      return s_D3DRMERR_BADVALUE_00559134;
    case -0x7789fce9:
      return s_D3DRMERR_BADMAJORVERSION_00559118;
    case -0x7789fce8:
      return s_D3DRMERR_BADMINORVERSION_005590fc;
    case -0x7789fce7:
      return s_D3DRMERR_UNABLETOEXECUTE_005590e0;
    }
  }
  else if (param_1 < -0x7788ffeb) {
    if (param_1 == -0x7788ffec) {
      return s_The_requested_operation_cannot_b_00559024;
    }
    if (param_1 == -0x7788fff6) {
      return s_The_session_is_full_or_an_incorr_0055907c;
    }
  }
  else if (param_1 < -0x7788ffd7) {
    if (param_1 == -0x7788ffd8) {
      return s_The_player_cannot_be_added_to_th_00558fb0;
    }
    if (param_1 == -0x7788ffe2) {
      return s_The_supplied_buffer_is_not_large_00558fdc;
    }
  }
  else if (param_1 < -0x7788ffc3) {
    if (param_1 == -0x7788ffc4) {
      return s_A_new_player_cannot_be_created__00558f6c;
    }
    if (param_1 == -0x7788ffce) {
      return s_A_new_group_cannot_be_created__00558f90;
    }
  }
  else if (param_1 < -0x7788ffaf) {
    if (param_1 == -0x7788ffb0) {
      return s_The_capabilities_of_the_DirectPl_00558e60;
    }
    if (param_1 == -0x7788ffba) {
      return s_A_new_session_cannot_be_created__00558f48;
    }
  }
  else if (param_1 < -0x7788ff87) {
    if (param_1 == -0x7788ff88) {
      return s_The_flags_passed_to_this_functio_00558dfc;
    }
    if (param_1 == -0x7788ffa6) {
      return s_An_exception_occurred_when_proce_00558e2c;
    }
  }
  else if (param_1 < -0x7788ff69) {
    if (param_1 == -0x7788ff6a) {
      return s_The_player_ID_is_not_recognized_a_00558d80;
    }
    if (param_1 == -0x7788ff7e) {
      return s_The_DirectPlay_object_pointer_is_00558dd0;
    }
  }
  else if (param_1 < -0x7788ff55) {
    if (param_1 == -0x7788ff56) {
      return s_No_communication_link_was_establ_00558cf8;
    }
    if (param_1 == -0x7788ff60) {
      return s_The_communication_link_that_Dire_00558d20;
    }
  }
  else if (param_1 < -0x7788ff37) {
    if (param_1 == -0x7788ff38) {
      return s_No_name_server__host__could_be_f_00558ca0;
    }
    if (param_1 == -0x7788ff42) {
      return (char *)0x0;
    }
  }
  else if (param_1 < -0x7788ff23) {
    if (param_1 == -0x7788ff24) {
      return s_There_are_no_existing_sessions_f_00558c40;
    }
    if (param_1 == -0x7788ff2e) {
      return s_There_are_no_active_players_in_t_00558c70;
    }
  }
  else if (param_1 < -0x7788ff0f) {
    if (param_1 == -0x7788ff10) {
      return s_The_operation_could_not_be_compl_00558bac;
    }
    if (param_1 == -0x7788ff1a) {
      return s_The_message_buffer_passed_to_the_00558bec;
    }
  }
  else if (param_1 < -0x7788fef1) {
    if (param_1 == -0x7788fef2) {
      return s_The_DirectPlay_message_queue_is_f_00558b4c;
    }
    if (param_1 == -0x7788ff06) {
      return s_The_requested_function_is_not_av_00558b74;
    }
  }
  else if (param_1 < -0x7788fed3) {
    if (param_1 == -0x7788fed4) {
      return s_A_player_has_lost_the_connection_00558abc;
    }
    if (param_1 == -0x7788fee8) {
      return s_The_user_canceled_the_connection_00558af0;
    }
  }
  else if (param_1 < -0x7788fc17) {
    if (param_1 == -0x7788fc18) {
      return s_The_data_buffer_is_too_large_to_s_00558a64;
    }
    if (param_1 == -0x7788feca) {
      return s_The_connection_to_the_session_ha_00558a8c;
    }
  }
  else if (param_1 < -0x7788fc03) {
    if (param_1 == -0x7788fc04) {
      return s_The_application_has_not_been_sta_00558a18;
    }
    if (param_1 == -0x7788fc0e) {
      return s_Cannot_start_the_application__00558a44;
    }
  }
  else if (param_1 < -0x7788fbe5) {
    if (param_1 == -0x7788fbe6) {
      return s_An_unknown_application_was_speci_005589c8;
    }
    if (param_1 == -0x7788fbfa) {
      return s_The_interface_parameter_is_inval_005589f0;
    }
  }
  else {
    if (param_1 == -0x7788fbd2) {
      return s_Returned_by_the_IDirectPlayLobby_00558914;
    }
    if (param_1 == 0) {
      return s_No_error__005589a0;
    }
  }
  return s_Unrecognized_error_value__005589ac;
}
