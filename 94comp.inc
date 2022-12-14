start32save_data



sc94_floor	dw	NULL
	dw	st_mouse
	dw	NULL
	dw	94
	dw	NULL
	dd	sc94_floor_table
	dw	153
	dw	256
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	advisor_188
	dw	0
	dw	0
	dw	270
	dw	52
	dw	floor_action



end32save_data

start32data



sc94_floor_table	dw	id_sc94_floor
	dw	return_ok
	dw	id_door_l94
	dw	get_to_door_l94
	dw	id_door_r94
	dw	get_to_door_r94
	dw	id_hologram_pad
	dw	get_to_hologram_pad
	dw	-1



end32data

start32save_data



door_l94	dw	l_script
	dw	st_mouse+st_logic+st_background
	dw	NULL
	dw	94
	dw	NULL
	dd	NULL
	dw	202
	dw	136
	dw	s58
	dw	1+t7
	dw	std_exit_up_on
	dw	std_off
	dw	advisor_188
	dw	-1
	dw	26
	dw	27
	dw	98
	dw	door_l94_action
	dw	0
	dw	0
	dw	0
	dw	0
	dw	NULL
	dd	0
	dw	0
	dw	c_base_mode
	dw	door_l94_logic
	dw	0


door_l94r	dw	l_script
	dw	st_logic+st_background
	dw	NULL
	dw	94
	dw	NULL
	dd	NULL
	dw	228
	dw	136
	dw	s59
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
	dw	door_l94r_logic
	dw	0


door_r94	dw	l_script
	dw	st_mouse+st_logic+st_background
	dw	NULL
	dw	94
	dw	NULL
	dd	NULL
	dw	345
	dw	136
	dw	s60
	dw	1+t7
	dw	std_exit_up_on
	dw	std_off
	dw	advisor_188
	dw	0
	dw	26
	dw	28
	dw	98
	dw	door_r94_action
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dd	NULL
	dw	NULL
	dw	c_base_mode
	dw	door_r94_logic
	dw	0


door_r94r	dw	l_script
	dw	st_logic+st_background
	dw	NULL
	dw	94
	dw	NULL
	dd	NULL
	dw	372
	dw	136
	dw	s61
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
	dw	door_r94r_logic
	dw	0


hologram_pad	dw	NULL
	dw	st_mouse
	dw	NULL
	dw	94
	dw	NULL
	dd	NULL
	dw	266
	dw	271
	dw	NULL
	dw	24607
	dw	std_on
	dw	std_off
	dw	advisor_188
	dw	0
	dw	0
	dw	41
	dw	7
	dw	hologram_pad_action


hologram_a	dw	l_script
	dw	st_logic+st_recreate
	dw	NULL
	dw	94
	dw	NULL
	dd	NULL
	dw	NULL
	dw	NULL
	dw	s92
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	0
	dw	0
	dw	0
	dw	0
	dw	NULL
	dd	0
	dw	0
	dw	c_base_mode
	dw	hologram_a_logic
	dw	0


hologram_b	dw	l_script
	dw	st_logic+st_recreate
	dw	NULL
	dw	94
	dw	NULL
	dd	NULL
	dw	NULL
	dw	NULL
	dw	s93
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
	dw	hologram_b_logic
	dw	0
	dd	NULL
	dd	NULL
	dd	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dw	160
	dw	5
	dw	NULL
	dw	NULL
	dw	NULL
	dd	NULL
	dw	NULL
	dw	NULL
	dw	NULL
	dd	NULL
	dw	0



end32save_data

start32data



rs_foster_94_90	dw	c_screen
	dw	90
	dw	c_place
	dw	id_sc90_smfloor
	dw	c_xcood
	dw	200
	dw	c_ycood
	dw	256
	dw	c_frame
	dw	46+s182
	dw	c_dir
	dw	right
	dw	-1


rs_foster_94_95	dw	c_screen
	dw	95
	dw	c_place
	dw	id_sc95_floor
	dw	c_xcood
	dw	288
	dw	c_ycood
	dw	256
	dw	c_dir
	dw	down
	dw	-1


door_l94_anim	dw	s58
	dw	202
	dw	136
	dw	0
	dw	202
	dw	136
	dw	1
	dw	202
	dw	136
	dw	2
	dw	202
	dw	136
	dw	3
	dw	202
	dw	136
	dw	4
	dw	202
	dw	136
	dw	5
	dw	202
	dw	136
	dw	6
	dw	202
	dw	136
	dw	7
	dw	202
	dw	136
	dw	8
	dw	202
	dw	136
	dw	9
	dw	202
	dw	136
	dw	10
	dw	202
	dw	136
	dw	11
	dw	202
	dw	136
	dw	12
	dw	202
	dw	136
	dw	13
	dw	202
	dw	136
	dw	14
	dw	202
	dw	136
	dw	15
	dw	202
	dw	136
	dw	16
	dw	202
	dw	136
	dw	17
	dw	202
	dw	136
	dw	18
	dw	202
	dw	136
	dw	19
	dw	202
	dw	136
	dw	20
	dw	202
	dw	136
	dw	21
	dw	202
	dw	136
	dw	22
	dw	202
	dw	136
	dw	23
	dw	0


door_l94r_anim	dw	s59
	dw	228
	dw	136
	dw	0
	dw	228
	dw	136
	dw	1
	dw	228
	dw	136
	dw	2
	dw	228
	dw	136
	dw	3
	dw	228
	dw	136
	dw	4
	dw	228
	dw	136
	dw	5
	dw	228
	dw	136
	dw	6
	dw	228
	dw	136
	dw	7
	dw	228
	dw	136
	dw	8
	dw	228
	dw	136
	dw	9
	dw	228
	dw	136
	dw	10
	dw	228
	dw	136
	dw	11
	dw	228
	dw	136
	dw	12
	dw	228
	dw	136
	dw	13
	dw	228
	dw	136
	dw	14
	dw	228
	dw	136
	dw	15
	dw	228
	dw	136
	dw	16
	dw	228
	dw	136
	dw	17
	dw	228
	dw	136
	dw	18
	dw	228
	dw	136
	dw	19
	dw	228
	dw	136
	dw	20
	dw	228
	dw	136
	dw	21
	dw	228
	dw	136
	dw	22
	dw	228
	dw	136
	dw	23
	dw	0


door_r94_anim	dw	s60
	dw	345
	dw	136
	dw	0
	dw	345
	dw	136
	dw	1
	dw	345
	dw	136
	dw	2
	dw	345
	dw	136
	dw	3
	dw	345
	dw	136
	dw	4
	dw	345
	dw	136
	dw	5
	dw	345
	dw	136
	dw	6
	dw	345
	dw	136
	dw	7
	dw	345
	dw	136
	dw	8
	dw	345
	dw	136
	dw	9
	dw	345
	dw	136
	dw	10
	dw	345
	dw	136
	dw	11
	dw	345
	dw	136
	dw	12
	dw	345
	dw	136
	dw	13
	dw	345
	dw	136
	dw	14
	dw	345
	dw	136
	dw	15
	dw	345
	dw	136
	dw	16
	dw	345
	dw	136
	dw	17
	dw	345
	dw	136
	dw	18
	dw	345
	dw	136
	dw	19
	dw	345
	dw	136
	dw	20
	dw	345
	dw	136
	dw	21
	dw	345
	dw	136
	dw	22
	dw	345
	dw	136
	dw	23
	dw	0


door_r94r_anim	dw	s61
	dw	372
	dw	136
	dw	0
	dw	372
	dw	136
	dw	1
	dw	372
	dw	136
	dw	2
	dw	372
	dw	136
	dw	3
	dw	372
	dw	136
	dw	4
	dw	372
	dw	136
	dw	5
	dw	372
	dw	136
	dw	6
	dw	372
	dw	136
	dw	7
	dw	372
	dw	136
	dw	8
	dw	372
	dw	136
	dw	9
	dw	372
	dw	136
	dw	10
	dw	372
	dw	136
	dw	11
	dw	372
	dw	136
	dw	12
	dw	372
	dw	136
	dw	13
	dw	372
	dw	136
	dw	14
	dw	372
	dw	136
	dw	15
	dw	372
	dw	136
	dw	16
	dw	372
	dw	136
	dw	17
	dw	372
	dw	136
	dw	18
	dw	372
	dw	136
	dw	19
	dw	372
	dw	136
	dw	20
	dw	372
	dw	136
	dw	21
	dw	372
	dw	136
	dw	22
	dw	372
	dw	136
	dw	23
	dw	0


holo1_a_anim	dw	s92
	dw	231
	dw	176
	dw	0
	dw	231
	dw	176
	dw	1
	dw	231
	dw	176
	dw	2
	dw	231
	dw	176
	dw	3
	dw	231
	dw	176
	dw	4
	dw	231
	dw	176
	dw	5
	dw	231
	dw	176
	dw	6
	dw	231
	dw	176
	dw	7
	dw	0


holo1_b_anim	dw	s93
	dw	231
	dw	234
	dw	0
	dw	231
	dw	234
	dw	1
	dw	231
	dw	234
	dw	2
	dw	231
	dw	234
	dw	3
	dw	231
	dw	234
	dw	4
	dw	231
	dw	234
	dw	5
	dw	231
	dw	234
	dw	6
	dw	231
	dw	234
	dw	7
	dw	0


holo3_anim	dw	s97
	dw	241
	dw	191
	dw	0
	dw	241
	dw	191
	dw	1
	dw	241
	dw	191
	dw	2
	dw	241
	dw	191
	dw	3
	dw	241
	dw	191
	dw	4
	dw	0


anita_holo_talk	dw	s96
	dw	s96
	dw	280
	dw	225
	dw	0
	dw	280
	dw	225
	dw	1
	dw	280
	dw	225
	dw	2
	dw	280
	dw	225
	dw	3
	dw	280
	dw	225
	dw	4
	dw	280
	dw	225
	dw	1
	dw	280
	dw	225
	dw	2
	dw	280
	dw	225
	dw	3
	dw	280
	dw	225
	dw	5
	dw	280
	dw	225
	dw	0
	dw	280
	dw	225
	dw	1
	dw	280
	dw	225
	dw	5
	dw	280
	dw	225
	dw	6
	dw	280
	dw	225
	dw	1
	dw	280
	dw	225
	dw	2
	dw	280
	dw	225
	dw	2
	dw	280
	dw	225
	dw	3
	dw	280
	dw	225
	dw	4
	dw	280
	dw	225
	dw	6
	dw	280
	dw	225
	dw	5
	dw	280
	dw	225
	dw	0
	dw	280
	dw	225
	dw	1
	dw	280
	dw	225
	dw	2
	dw	280
	dw	225
	dw	3
	dw	280
	dw	225
	dw	4
	dw	280
	dw	225
	dw	5
	dw	280
	dw	225
	dw	0
	dw	280
	dw	225
	dw	1
	dw	280
	dw	225
	dw	2
	dw	280
	dw	225
	dw	3
	dw	280
	dw	225
	dw	4
	dw	280
	dw	225
	dw	1
	dw	280
	dw	225
	dw	2
	dw	280
	dw	225
	dw	3
	dw	280
	dw	225
	dw	5
	dw	280
	dw	225
	dw	2
	dw	280
	dw	225
	dw	6
	dw	280
	dw	225
	dw	5
	dw	280
	dw	225
	dw	0
	dw	280
	dw	225
	dw	1
	dw	280
	dw	225
	dw	6
	dw	280
	dw	225
	dw	2
	dw	280
	dw	225
	dw	3
	dw	280
	dw	225
	dw	4
	dw	280
	dw	225
	dw	6
	dw	280
	dw	225
	dw	5
	dw	280
	dw	225
	dw	0
	dw	280
	dw	225
	dw	1
	dw	280
	dw	225
	dw	3
	dw	280
	dw	225
	dw	4
	dw	280
	dw	225
	dw	6
	dw	280
	dw	225
	dw	5
	dw	280
	dw	225
	dw	0
	dw	280
	dw	225
	dw	1
	dw	280
	dw	225
	dw	2
	dw	280
	dw	225
	dw	5
	dw	280
	dw	225
	dw	0
	dw	280
	dw	225
	dw	3
	dw	280
	dw	225
	dw	4
	dw	280
	dw	225
	dw	6
	dw	280
	dw	225
	dw	5
	dw	280
	dw	225
	dw	6
	dw	280
	dw	225
	dw	0
	dw	280
	dw	225
	dw	6
	dw	0


pal94	dw	0
	dw	3584
	dw	8960
	dw	1044
	dw	7211
	dw	12812
	dw	5413
	dw	11066
	dw	15390
	dw	0
	dw	8
	dw	3072
	dw	0
	dw	16
	dw	5120
	dw	1036
	dw	5120
	dw	8
	dw	3104
	dw	9216
	dw	20
	dw	7208
	dw	15360
	dw	36
	dw	0
	dw	24
	dw	0
	dw	15159
	dw	9787
	dw	12077
	dw	8987
	dw	4390
	dw	7448
	dw	3850
	dw	1301
	dw	3335
	dw	7176
	dw	12
	dw	1044
	dw	4096
	dw	9216
	dw	0
	dw	28
	dw	5120
	dw	0
	dw	6180
	dw	24
	dw	7168
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
	dw	16191
	dw	16145
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
	dw	16145
	dw	4415
	dw	16191
	dw	16145
	dw	4415
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


fast_list_sc94	dw	it_blue_foster+disk_4
	dw	it_logoff+$8000+disk_4
	dw	it_window+$8000+disk_4
	dw	it_info_button+disk_4
	dw	it_link_arrows+disk_4
	dw	it_link_objects+disk_4
	dw	it_enter_top+disk_4+$8000
	dw	it_exit_top+disk_4+$8000
	dw	it_crouch_right+disk_4
	dw	it_sc94_layer_0+disk_4
	dw	it_holo1_a+$8000+disk_4
	dw	it_holo1_b+disk_4
	dw	0


chip_list_sc94	dw	it_door_l94+disk_4
	dw	it_door_l94r+disk_4
	dw	it_door_r94+disk_4
	dw	it_door_r94r+disk_4
	dw	it_holo2_a+disk_4
	dw	it_holo2_b+disk_4+$8000
	dw	it_holo3+$8000+disk_4
	dw	0


sc94_logic	dw	id_blue_foster
	dw	id_door_l94
	dw	id_door_l94r
	dw	id_door_r94
	dw	id_door_r94r
	dw	id_hologram_a
	dw	id_hologram_b
	dw	id_eyeball_90
	dw	$ffff
	dw	id_linc_menu_logic


sc94_mouse	dw	id_hologram_pad
	dw	id_door_l94
	dw	id_door_r94
	dw	id_sc94_floor
	dw	$ffff
	dw	id_linc_menu_mouse



end32data

start32save_data



end32save_data
