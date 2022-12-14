start32save_data



sc91_floor	dw	NULL
	dw	st_mouse
	dw	NULL
	dw	91
	dw	NULL
	dd	sc91_floor_table
	dw	153
	dw	254
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	advisor_188
	dw	0
	dw	0
	dw	269
	dw	53
	dw	floor_action



end32save_data

start32data



sc91_floor_table	dw	id_sc91_floor
	dw	return_ok
	dw	id_door_l91
	dw	get_to_door_l91
	dw	id_door_r91
	dw	get_to_door_r91
	dw	id_door_t91
	dw	get_to_door_t91
	dw	id_bag_91
	dw	get_to_bag_91
	dw	id_decomp_obj
	dw	get_to_decomp_obj
	dw	id_decrypt_obj
	dw	get_to_decrypt_obj
	dw	id_report_book
	dw	get_to_report_book
	dw	id_eyeball_91
	dw	get_to_eyeball_91
	dw	-1



end32data

start32save_data



door_l91	dw	l_script
	dw	st_mouse+st_logic+st_background
	dw	NULL
	dw	91
	dw	NULL
	dd	NULL
	dw	204
	dw	136
	dw	s260
	dw	1+t7
	dw	std_exit_left_on
	dw	std_off
	dw	advisor_188
	dw	-5
	dw	26
	dw	9
	dw	109
	dw	door_l91_action
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dd	NULL
	dw	NULL
	dw	c_base_mode
	dw	door_l91_logic
	dw	0


door_l91f	dw	l_script
	dw	st_mouse+st_logic+st_sort
	dw	NULL
	dw	91
	dw	NULL
	dd	NULL
	dw	199
	dw	136
	dw	s261
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	-14
	dw	263-136
	dw	15
	dw	10
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dd	NULL
	dw	NULL
	dw	c_base_mode
	dw	door_l91f_logic
	dw	0


door_r91	dw	l_script
	dw	st_mouse+st_logic+st_background
	dw	NULL
	dw	91
	dw	NULL
	dd	NULL
	dw	370
	dw	136
	dw	s111
	dw	1+t7
	dw	std_exit_right_on
	dw	std_off
	dw	advisor_188
	dw	0
	dw	26
	dw	8
	dw	109
	dw	door_r91_action
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dd	NULL
	dw	NULL
	dw	c_base_mode
	dw	door_r91_logic
	dw	0


door_r91f	dw	l_script
	dw	st_mouse+st_logic+st_sort
	dw	NULL
	dw	91
	dw	NULL
	dd	NULL
	dw	374
	dw	136
	dw	s112
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	0
	dw	263-136
	dw	30
	dw	10
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dd	NULL
	dw	NULL
	dw	c_base_mode
	dw	door_r91f_logic
	dw	0


door_t91	dw	l_script
	dw	st_mouse+st_logic+st_background
	dw	NULL
	dw	91
	dw	NULL
	dd	NULL
	dw	276
	dw	136
	dw	s31
	dw	1+t7
	dw	std_exit_up_on
	dw	std_off
	dw	advisor_188
	dw	0
	dw	26
	dw	28
	dw	95
	dw	door_t91_action
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dd	NULL
	dw	NULL
	dw	c_base_mode
	dw	door_t91_logic
	dw	0


door_t91r	dw	l_script
	dw	st_logic+st_background
	dw	NULL
	dw	91
	dw	NULL
	dd	NULL
	dw	301
	dw	136
	dw	s32
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dd	NULL
	dw	NULL
	dw	c_base_mode
	dw	door_t91r_logic
	dw	0


bag_91	dw	l_script
	dw	st_mouse+st_logic+st_sort+st_recreate
	dw	NULL
	dw	91
	dw	NULL
	dd	NULL
	dw	315
	dw	277
	dw	s47
	dw	24584
	dw	std_on
	dw	std_off
	dw	advisor_188
	dw	0
	dw	0
	dw	28
	dw	15
	dw	bag_91_action
	dw	0
	dw	0
	dw	0
	dw	0
	dw	NULL
	dd	0
	dw	0
	dw	c_base_mode
	dw	bag_91_logic
	dw	0


decomp_obj	dw	l_script
	dw	st_logic+st_recreate
	dw	NULL
	dw	91
	dw	NULL
	dd	NULL
	dw	244
	dw	281
	dw	s48
	dw	24586
	dw	std_on
	dw	std_off
	dw	advisor_188
	dw	-1
	dw	-1
	dw	20
	dw	15
	dw	decomp_obj_action
	dw	0
	dw	0
	dw	0
	dw	0
	dw	NULL
	dd	0
	dw	0
	dw	c_base_mode
	dw	decomp_obj_logic
	dw	0


decrypt_obj	dw	l_script
	dw	st_logic+st_recreate
	dw	NULL
	dw	91
	dw	NULL
	dd	NULL
	dw	277
	dw	281
	dw	s131
	dw	24585
	dw	std_on
	dw	std_off
	dw	advisor_188
	dw	-1
	dw	-1
	dw	25
	dw	12
	dw	decrypt_obj_action
	dw	0
	dw	0
	dw	0
	dw	0
	dw	NULL
	dd	0
	dw	0
	dw	c_base_mode
	dw	decrypt_obj_logic
	dw	0


report_book	dw	l_script
	dw	st_mouse+st_logic+st_sort+st_recreate
	dw	NULL
	dw	91
	dw	NULL
	dd	NULL
	dw	359
	dw	277
	dw	s95
	dw	24596
	dw	std_on
	dw	std_off
	dw	advisor_188
	dw	-1
	dw	0
	dw	16
	dw	15
	dw	report_book_action
	dw	0
	dw	0
	dw	0
	dw	0
	dw	NULL
	dd	0
	dw	0
	dw	c_base_mode
	dw	report_book_logic
	dw	0


eyeball_91	dw	l_script
	dw	st_mouse+st_logic+st_background+st_recreate
	dw	NULL
	dw	91
	dw	NULL
	dd	NULL
	dw	232
	dw	222
	dw	6+s91
	dw	24587
	dw	std_on
	dw	std_off
	dw	advisor_188
	dw	-1
	dw	-1
	dw	31
	dw	29
	dw	eyeball_91_action
	dw	0
	dw	0
	dw	0
	dw	0
	dw	NULL
	dd	0
	dw	0
	dw	c_base_mode
	dw	eyeball_91_logic
	dw	0



end32save_data

start32data



eye_91_table	dw	4
	dw	4
	dw	4
	dw	4
	dw	4
	dw	4
	dw	5
	dw	5
	dw	6
	dw	6
	dw	6
	dw	6
	dw	7
	dw	7
	dw	8
	dw	8
	dw	9
	dw	9
	dw	10
	dw	10
	dw	11
	dw	11
	dw	12
	dw	12
	dw	12
	dw	12
	dw	12
	dw	12
	dw	12
	dw	12
	dw	12
	dw	12
	dw	4
	dw	4
	dw	4
	dw	4
	dw	4
	dw	4
	dw	5
	dw	5
	dw	6
	dw	6
	dw	6
	dw	6
	dw	7
	dw	7
	dw	7
	dw	8
	dw	8
	dw	9
	dw	9
	dw	10
	dw	10
	dw	10
	dw	11
	dw	11
	dw	11
	dw	12
	dw	12
	dw	12
	dw	12
	dw	12
	dw	12
	dw	12
	dw	4
	dw	4
	dw	4
	dw	4
	dw	4
	dw	5
	dw	5
	dw	6
	dw	6
	dw	6
	dw	6
	dw	6
	dw	6
	dw	7
	dw	7
	dw	7
	dw	8
	dw	8
	dw	8
	dw	9
	dw	9
	dw	10
	dw	10
	dw	11
	dw	11
	dw	11
	dw	11
	dw	11
	dw	11
	dw	12
	dw	12
	dw	12
	dw	4
	dw	4
	dw	4
	dw	4
	dw	5
	dw	5
	dw	5
	dw	6
	dw	6
	dw	6
	dw	6
	dw	6
	dw	6
	dw	7
	dw	7
	dw	7
	dw	7
	dw	8
	dw	8
	dw	8
	dw	9
	dw	9
	dw	10
	dw	10
	dw	10
	dw	10
	dw	11
	dw	11
	dw	11
	dw	11
	dw	11
	dw	11
	dw	4
	dw	4
	dw	4
	dw	5
	dw	5
	dw	5
	dw	6
	dw	6
	dw	6
	dw	6
	dw	6
	dw	6
	dw	6
	dw	6
	dw	7
	dw	7
	dw	7
	dw	7
	dw	8
	dw	8
	dw	8
	dw	8
	dw	9
	dw	9
	dw	10
	dw	10
	dw	10
	dw	10
	dw	10
	dw	11
	dw	11
	dw	11
	dw	4
	dw	4
	dw	5
	dw	5
	dw	5
	dw	5
	dw	6
	dw	6
	dw	6
	dw	6
	dw	6
	dw	6
	dw	6
	dw	6
	dw	7
	dw	7
	dw	7
	dw	7
	dw	7
	dw	7
	dw	8
	dw	8
	dw	8
	dw	8
	dw	9
	dw	9
	dw	9
	dw	10
	dw	10
	dw	10
	dw	10
	dw	10


rs_foster_91_90	dw	c_screen
	dw	90
	dw	c_place
	dw	id_sc90_floor
	dw	c_xcood
	dw	384
	dw	c_ycood
	dw	256
	dw	-1


rs_foster_91_92	dw	c_screen
	dw	92
	dw	c_place
	dw	id_slab1
	dw	c_xcood
	dw	128
	dw	c_ycood
	dw	304
	dw	-1


rs_foster_91_95	dw	c_screen
	dw	95
	dw	c_place
	dw	id_sc95_floor
	dw	c_xcood
	dw	184
	dw	c_ycood
	dw	264
	dw	c_frame
	dw	46+s182
	dw	c_dir
	dw	3
	dw	-1


door_l91_anim	dw	s260
	dw	204
	dw	136
	dw	0
	dw	204
	dw	136
	dw	1
	dw	204
	dw	136
	dw	2
	dw	204
	dw	136
	dw	3
	dw	204
	dw	136
	dw	4
	dw	204
	dw	136
	dw	5
	dw	204
	dw	136
	dw	6
	dw	204
	dw	136
	dw	7
	dw	204
	dw	136
	dw	8
	dw	204
	dw	136
	dw	9
	dw	0


door_l91f_anim	dw	s261
	dw	199
	dw	136
	dw	0
	dw	199
	dw	136
	dw	1
	dw	199
	dw	136
	dw	2
	dw	199
	dw	136
	dw	3
	dw	199
	dw	136
	dw	4
	dw	199
	dw	136
	dw	5
	dw	199
	dw	136
	dw	6
	dw	199
	dw	136
	dw	7
	dw	199
	dw	136
	dw	8
	dw	199
	dw	136
	dw	9
	dw	0


door_r91_anim	dw	s111
	dw	370
	dw	136
	dw	0
	dw	370
	dw	136
	dw	1
	dw	370
	dw	136
	dw	2
	dw	370
	dw	136
	dw	3
	dw	370
	dw	136
	dw	4
	dw	370
	dw	136
	dw	5
	dw	370
	dw	136
	dw	6
	dw	370
	dw	136
	dw	7
	dw	370
	dw	136
	dw	8
	dw	370
	dw	136
	dw	9
	dw	0


door_r91f_anim	dw	s112
	dw	374
	dw	136
	dw	0
	dw	374
	dw	136
	dw	1
	dw	374
	dw	136
	dw	2
	dw	374
	dw	136
	dw	3
	dw	374
	dw	136
	dw	4
	dw	374
	dw	136
	dw	5
	dw	374
	dw	136
	dw	6
	dw	374
	dw	136
	dw	7
	dw	374
	dw	136
	dw	8
	dw	374
	dw	136
	dw	9
	dw	0


door_t91_anim	dw	s31
	dw	276
	dw	136
	dw	0
	dw	276
	dw	136
	dw	1
	dw	276
	dw	136
	dw	2
	dw	276
	dw	136
	dw	3
	dw	276
	dw	136
	dw	4
	dw	276
	dw	136
	dw	5
	dw	276
	dw	136
	dw	6
	dw	276
	dw	136
	dw	7
	dw	276
	dw	136
	dw	8
	dw	276
	dw	136
	dw	9
	dw	0


door_t91r_anim	dw	s32
	dw	301
	dw	136
	dw	0
	dw	301
	dw	136
	dw	1
	dw	301
	dw	136
	dw	2
	dw	301
	dw	136
	dw	3
	dw	301
	dw	136
	dw	4
	dw	301
	dw	136
	dw	5
	dw	301
	dw	136
	dw	6
	dw	301
	dw	136
	dw	7
	dw	301
	dw	136
	dw	8
	dw	301
	dw	136
	dw	9
	dw	0


get_decomp	dw	s48
	dw	244
	dw	281
	dw	0
	dw	244
	dw	281
	dw	1
	dw	244
	dw	281
	dw	2
	dw	244
	dw	281
	dw	3
	dw	244
	dw	281
	dw	4
	dw	244
	dw	281
	dw	5
	dw	244
	dw	281
	dw	6
	dw	244
	dw	281
	dw	7
	dw	0


get_decrypt	dw	s131
	dw	277
	dw	281
	dw	0
	dw	277
	dw	281
	dw	1
	dw	277
	dw	281
	dw	1
	dw	277
	dw	281
	dw	2
	dw	277
	dw	281
	dw	3
	dw	277
	dw	281
	dw	4
	dw	277
	dw	281
	dw	5
	dw	277
	dw	281
	dw	6
	dw	0


get_report	dw	s95
	dw	359
	dw	277
	dw	0
	dw	359
	dw	277
	dw	1
	dw	359
	dw	277
	dw	1
	dw	359
	dw	277
	dw	2
	dw	359
	dw	277
	dw	3
	dw	359
	dw	277
	dw	4
	dw	359
	dw	277
	dw	5
	dw	359
	dw	277
	dw	6
	dw	359
	dw	277
	dw	7
	dw	0


eye91_zap_anim	dw	s114
	dw	222
	dw	206
	dw	0
	dw	222
	dw	206
	dw	1
	dw	222
	dw	206
	dw	2
	dw	222
	dw	206
	dw	3
	dw	222
	dw	206
	dw	4
	dw	0


fost_die91	dw	s116
	dw	306
	dw	158
	dw	0
	dw	306
	dw	158
	dw	1
	dw	306
	dw	158
	dw	2
	dw	306
	dw	158
	dw	3
	dw	306
	dw	158
	dw	4
	dw	306
	dw	158
	dw	5
	dw	306
	dw	158
	dw	6
	dw	306
	dw	158
	dw	5
	dw	306
	dw	158
	dw	7
	dw	306
	dw	158
	dw	8
	dw	306
	dw	158
	dw	9
	dw	306
	dw	158
	dw	10
	dw	306
	dw	158
	dw	11
	dw	306
	dw	158
	dw	12
	dw	306
	dw	158
	dw	13
	dw	306
	dw	158
	dw	14
	dw	306
	dw	158
	dw	15
	dw	306
	dw	158
	dw	16
	dw	306
	dw	158
	dw	17
	dw	306
	dw	158
	dw	18
	dw	306
	dw	158
	dw	19
	dw	306
	dw	158
	dw	20
	dw	306
	dw	158
	dw	21
	dw	0


pal91	dw	0
	dw	3584
	dw	8960
	dw	1044
	dw	7211
	dw	12812
	dw	5413
	dw	11066
	dw	15390
	dw	0
	dw	52
	dw	11520
	dw	0
	dw	39
	dw	7936
	dw	1550
	dw	5888
	dw	10
	dw	3616
	dw	9472
	dw	20
	dw	7211
	dw	15360
	dw	39
	dw	0
	dw	25
	dw	0
	dw	15928
	dw	11071
	dw	13873
	dw	10015
	dw	6188
	dw	8990
	dw	5135
	dw	2587
	dw	5903
	dw	8458
	dw	783
	dw	1303
	dw	4096
	dw	12032
	dw	0
	dw	30
	dw	5632
	dw	0
	dw	6183
	dw	26
	dw	5120
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	0
	dw	14336
	dw	13364
	dw	11569
	dw	9261
	dw	8481
	dw	6687
	dw	6681
	dw	4626
	dw	2578
	dw	1803
	dw	770
	dw	519
	dw	13571
	dw	9517
	dw	9778
	dw	11805
	dw	5151
	dw	5926
	dw	8205
	dw	1808
	dw	2586
	dw	11267
	dw	2056
	dw	8210
	dw	7441
	dw	6954
	dw	9494
	dw	4119
	dw	3866
	dw	4864
	dw	13316
	dw	13364
	dw	11563
	dw	8751
	dw	9506
	dw	10024
	dw	8242
	dw	10527
	dw	6174
	dw	5927
	dw	7698
	dw	3600
	dw	2325
	dw	2308
	dw	11573
	dw	12837
	dw	7462
	dw	7982
	dw	9748
	dw	3351
	dw	4128
	dw	6663
	dw	778
	dw	9533
	dw	13100
	dw	9244
	dw	5162
	dw	8476
	dw	5390
	dw	2072
	dw	3855
	dw	2308
	dw	2865
	dw	9995
	dw	1285
	dw	285
	dw	4865
	dw	0
	dw	11573
	dw	12837
	dw	7462
	dw	0
	dw	16128
	dw	0
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	16191
	dw	13887
	dw	13878
	dw	12077
	dw	8241
	dw	10527
	dw	5917
	dw	5925
	dw	7698
	dw	2865
	dw	9995
	dw	1285
	dw	285
	dw	16129
	dw	16191


fast_list_sc91	dw	it_blue_foster+disk_4
	dw	it_logoff+$8000+disk_4
	dw	it_window+$8000+disk_4
	dw	it_info_button+disk_4
	dw	it_link_arrows+disk_4
	dw	it_link_objects+disk_4
	dw	it_enter_top+disk_4+$8000
	dw	it_exit_top+disk_4+$8000
	dw	it_crouch_left+disk_4+$8000
	dw	it_crouch_right+disk_4
	dw	it_crouch_down+disk_4+$8000
	dw	it_eyeball+disk_4
	dw	it_get_eye+disk_4+$8000
	dw	it_blind_eye+disk_4
	dw	it_see_eye+disk_4
	dw	it_sc91_layer_0+disk_4
	dw	it_sc91_layer_1+disk_4
	dw	it_sc91_grid_1+disk_4
	dw	0


chip_list_sc91	dw	it_bag_91+disk_4
	dw	it_decomp_obj+disk_4
	dw	it_decrypt_obj+disk_4
	dw	it_door_l91+disk_4
	dw	it_door_l91f+disk_4
	dw	it_door_r91+disk_4
	dw	it_door_r91f+disk_4
	dw	it_door_t91+disk_4
	dw	it_door_t91r+disk_4
	dw	it_eye91_zap+disk_4
	dw	it_fost_die91+disk_4+$8000
	dw	0


sc91_logic	dw	id_blue_foster
	dw	id_bag_91
	dw	id_decomp_obj
	dw	id_decrypt_obj
	dw	id_door_l91
	dw	id_door_l91f
	dw	id_door_r91
	dw	id_door_r91f
	dw	id_door_t91
	dw	id_door_t91r
	dw	id_eyeball_90
	dw	id_eyeball_91
	dw	$ffff
	dw	id_linc_menu_logic


sc91_mouse	dw	id_bag_91
	dw	id_decomp_obj
	dw	id_decrypt_obj
	dw	id_eyeball_91
	dw	id_door_l91
	dw	id_door_l91f
	dw	id_door_r91
	dw	id_door_r91f
	dw	id_door_t91
	dw	id_sc91_floor
	dw	$ffff
	dw	id_linc_menu_mouse



end32data

start32save_data



end32save_data
