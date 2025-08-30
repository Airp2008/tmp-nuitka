__int64 __fastcall sub_1C6C3E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // r14
  void *v27; // rdi
  __int64 v28; // rbx
  bool v29; // zf
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // r14
  void *v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rax
  _QWORD *v43; // r14
  void *v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rax
  _QWORD *v53; // r14
  void *v54; // rdi
  __int64 v55; // rbx
  __int64 v56; // rsi
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rax
  _QWORD *v61; // r14
  void *v62; // rdi
  __int64 v63; // rdx
  void *v64; // rdi
  __int64 v65; // rdx
  _QWORD *v66; // rax
  void *v67; // rdi
  _QWORD *v68; // r14
  __int64 v69; // rdx
  void *v70; // rdi
  __int64 v71; // rdx
  void *v72; // rdi
  __int64 v73; // rdx
  void *v74; // rdi
  __int64 v75; // rdx
  void *v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rsi
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rax
  _QWORD *v83; // r14
  void *v84; // rdi
  __int64 v85; // rdx
  void *v86; // rdi
  __int64 v87; // rdx
  __int64 v88; // rsi
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rax
  _QWORD *v93; // r14
  void *v94; // rdi
  __int64 v95; // rdx
  void *v96; // rdi
  __int64 v97; // rdx
  __int64 v98; // rsi
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // rax
  _QWORD *v103; // r14
  void *v104; // rdi
  __int64 v105; // rbx
  _QWORD *v106; // rax
  _QWORD *v107; // r14
  __int64 Object; // rax
  void *v109; // rdi
  __int64 v110; // rdx
  __int64 v111; // rsi
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // rax
  _QWORD *v116; // r14
  void *v117; // rdi
  __int64 v118; // rdx
  void *v119; // rdi
  __int64 v120; // rdx
  __int64 v121; // rsi
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rax
  _QWORD *v126; // r14
  void *v127; // rdi
  __int64 v128; // rbx
  __int64 v129; // rsi
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rdx
  __int64 v133; // rax
  _QWORD *v134; // r14
  void *v135; // rdi
  __int64 v136; // rdx
  void *v137; // rdi
  __int64 v138; // rdx
  void *v139; // rdi
  __int64 v140; // rdx
  __int64 v141; // rsi
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rdx
  __int64 v145; // rax
  _QWORD *v146; // r14
  void *v147; // rdi
  __int64 v148; // rbx
  __int64 v149; // rsi
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rdx
  __int64 v153; // rax
  _QWORD *v154; // r14
  void *v155; // rdi
  __int64 v156; // rbx
  __int64 v157; // rsi
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rdx
  __int64 v161; // rax
  _QWORD *v162; // r14
  void *v163; // rdi
  __int64 v164; // rbx
  __int64 v165; // rsi
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rdx
  __int64 v169; // rax
  _QWORD *v170; // r14
  void *v171; // rdi
  __int64 v172; // rdx
  void *v173; // rdi
  __int64 v174; // rdx
  _QWORD *v175; // rax
  _QWORD *v176; // r14
  __int64 v177; // rax
  void *v178; // rdi
  __int64 v179; // rdx
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rsi
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rdx
  __int64 v186; // rax
  _QWORD *v187; // r14
  void *v188; // rdi
  __int64 v189; // rdx
  void *v190; // rdi
  __int64 v191; // rdx
  __int64 v192; // rsi
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rdx
  __int64 v196; // rax
  _QWORD *v197; // r14
  void *v198; // rdi
  __int64 v199; // rdx
  void *v200; // rdi
  __int64 v201; // rdx
  __int64 v202; // rsi
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rdx
  __int64 v206; // rax
  _QWORD *v207; // r14
  void *v208; // rdi
  __int64 v209; // rdx
  void *v210; // rdi
  __int64 v211; // rdx
  __int64 v212; // rsi
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // rdx
  __int64 v216; // rax
  _QWORD *v217; // r14
  void *v218; // rdi
  __int64 v219; // rdx
  void *v220; // rdi
  __int64 v221; // rdx
  __int64 v222; // rsi
  __int64 v223; // r8
  __int64 v224; // r9
  __int64 v225; // rdx
  __int64 v226; // rax
  _QWORD *v227; // r14
  void *v228; // rdi
  __int64 v229; // rbx
  __int64 v230; // rsi
  __int64 v231; // r8
  __int64 v232; // r9
  __int64 v233; // rdx
  __int64 v234; // rax
  _QWORD *v235; // r14
  void *v236; // rdi
  __int64 v237; // rbx
  __int64 v238; // rsi
  __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // rdx
  __int64 v242; // rax
  _QWORD *v243; // r14
  void *v244; // rdi
  __int64 v245; // rbx
  __int64 v246; // rsi
  __int64 v247; // r8
  __int64 v248; // r9
  __int64 v249; // rdx
  __int64 v250; // rax
  _QWORD *v251; // r14
  void *v252; // rdi
  __int64 v253; // rbx
  __int64 v254; // rsi
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rdx
  __int64 v258; // rax
  _QWORD *v259; // r14
  void *v260; // rdi
  __int64 v261; // rdx
  void *v262; // rdi
  __int64 v263; // rdx
  __int64 v264; // rsi
  __int64 v265; // r8
  __int64 v266; // r9
  __int64 v267; // rdx
  __int64 v268; // rax
  _QWORD *v269; // r14
  void *v270; // rdi
  __int64 v271; // rdx
  void *v272; // rdi
  __int64 v273; // rdx
  __int64 v274; // rsi
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rdx
  __int64 v278; // rax
  _QWORD *v279; // r14
  void *v280; // rdi
  __int64 v281; // rdx
  void *v282; // rdi
  __int64 v283; // rdx
  __int64 v284; // rsi
  __int64 v285; // r8
  __int64 v286; // r9
  __int64 v287; // rdx
  __int64 v288; // rax
  _QWORD *v289; // r14
  void *v290; // rdi
  __int64 v291; // rdx
  void *v292; // rdi
  __int64 v293; // rdx
  void *v294; // rdi
  __int64 v295; // rdx
  void *v296; // rdi
  __int64 v297; // rdx
  void *v298; // rdi
  __int64 v299; // rdx
  void *v300; // rdi
  __int64 v301; // rdx
  void *v302; // rdi
  __int64 v303; // rdx
  __int64 v304; // rax
  __int64 v305; // rsi
  __int64 v306; // r9
  __int64 v307; // rdx
  __int64 v308; // rax
  _QWORD *v309; // rax
  _QWORD *v310; // r14
  _QWORD *v311; // rax
  _QWORD *v312; // rsi
  _QWORD *v313; // r14
  __int64 v314; // rsi
  char v315; // al
  char v316; // bl
  __int64 *v317; // rax
  __int64 v318; // rsi
  __int64 v319; // rax
  __int64 v320; // rcx
  __int64 v321; // rdx
  __int64 v322; // rbx
  __int64 v323; // rsi
  _QWORD *v324; // r15
  _QWORD *v325; // r14
  __int64 v326; // rbx
  __int64 v327; // rsi
  __int64 v328; // rax
  _QWORD *v329; // r15
  __int64 v330; // rsi
  __int64 v331; // rdx
  __int64 v332; // rsi
  __int64 v333; // rdx
  __int64 v334; // r15
  _QWORD *v335; // rbx
  __int64 v336; // rax
  _QWORD *v337; // r14
  int v338; // eax
  int v339; // ebx
  __int64 v340; // rsi
  __int64 v341; // rax
  _QWORD *v342; // r14
  __int64 v343; // rax
  _QWORD *v344; // r15
  __int64 v345; // rax
  _QWORD *v346; // rbx
  __int64 v347; // rax
  __int64 v348; // r14
  __int64 v349; // rax
  __int64 v350; // rax
  __int64 v351; // rsi
  int v352; // eax
  __int64 v353; // rsi
  __int64 v354; // rdx
  __int64 v355; // rsi
  _QWORD *v356; // r14
  __int64 v357; // r8
  __int64 v358; // rax
  __int64 v359; // rax
  __int64 v360; // r15
  __int64 v361; // rsi
  _QWORD *v362; // r14
  __int64 v363; // rax
  __int64 v364; // rdx
  __int64 v365; // rax
  __int64 v366; // r15
  __int64 *v367; // rax
  __int64 v368; // r14
  __int64 v369; // rsi
  _QWORD *v370; // rbx
  __int64 v371; // rax
  __int64 v372; // rdx
  __int64 v373; // rax
  _QWORD *v374; // r15
  __int64 v375; // rax
  __int64 v376; // rax
  _QWORD *v377; // r14
  __int64 v378; // rax
  __int64 v379; // r15
  __int64 v380; // r15
  __int64 v381; // rsi
  _QWORD *v382; // r14
  __int64 v383; // rax
  __int64 v384; // rdx
  __int64 v385; // rax
  _QWORD *v386; // rbx
  __int64 v387; // rax
  __int64 v388; // r14
  __int64 v389; // r14
  __int64 v390; // rsi
  _QWORD *v391; // rbx
  __int64 v392; // rax
  __int64 v393; // rdx
  __int64 v394; // rax
  _QWORD *v395; // r15
  __int64 v396; // rax
  __int64 v397; // rax
  _QWORD *v398; // r14
  __int64 v399; // rax
  __int64 v400; // r15
  __int64 v401; // r14
  __int64 v402; // rsi
  _QWORD *v403; // rbx
  __int64 v404; // rax
  __int64 v405; // rdx
  __int64 v406; // rax
  _QWORD *v407; // r15
  __int64 v408; // rax
  __int64 v409; // rax
  _QWORD *v410; // r14
  __int64 v411; // rax
  __int64 v412; // r15
  __int64 v413; // r14
  __int64 v414; // rsi
  _QWORD *v415; // rbx
  __int64 v416; // rax
  __int64 v417; // rdx
  __int64 v418; // rax
  _QWORD *v419; // r15
  __int64 v420; // rax
  __int64 v421; // rax
  _QWORD *v422; // r14
  __int64 v423; // rax
  __int64 v424; // r15
  __int64 v425; // r14
  __int64 v426; // rsi
  _QWORD *v427; // rbx
  __int64 v428; // rax
  __int64 v429; // rdx
  __int64 v430; // rax
  _QWORD *v431; // r15
  __int64 v432; // rax
  __int64 v433; // rax
  _QWORD *v434; // r14
  __int64 v435; // rax
  __int64 v436; // r15
  __int64 *v437; // rax
  __int64 v438; // rsi
  __int64 v439; // rdx
  __int64 v440; // rax
  __int64 v441; // rax
  __int64 v442; // rax
  __int64 v443; // rsi
  __int64 v444; // rdi
  _QWORD *v445; // rax
  __int64 v446; // rdx
  __int64 v447; // rsi
  _QWORD *v448; // r14
  _QWORD *v449; // r15
  __int64 v450; // r15
  __int64 v451; // rax
  __int64 v452; // rax
  __int64 v453; // rax
  __int64 v454; // rax
  int v455; // ecx
  _QWORD *v456; // r9
  _QWORD *v457; // r8
  int v458; // eax
  __int64 v459; // rax
  __int64 v460; // rax
  __int64 v461; // rax
  int v462; // eax
  __int64 v463; // rax
  __int64 v464; // rax
  __int64 v465; // rax
  int v466; // eax
  __int64 v467; // rax
  __int64 v468; // rax
  __int64 v469; // rax
  int v470; // eax
  __int64 v471; // rax
  __int64 v472; // rax
  __int64 v473; // rax
  int v474; // eax
  __int64 v475; // rax
  __int64 v476; // rax
  __int64 v477; // rax
  int v478; // eax
  __int64 v479; // rax
  __int64 v480; // rax
  __int64 v481; // rax
  int v482; // eax
  __int64 v483; // rax
  __int64 v484; // rax
  __int64 v485; // rax
  int v486; // eax
  __int64 v487; // rax
  __int64 v488; // rax
  __int64 v489; // rax
  _QWORD *v490; // rbx
  _QWORD *v491; // r15
  __int64 v492; // rax
  _QWORD *v493; // rbx
  __int64 v494; // rax
  __int64 v495; // rax
  _QWORD *v496; // r15
  __int64 v497; // rsi
  __int64 v498; // rdi
  _QWORD *v499; // rbx
  _QWORD *v500; // rax
  __int64 v501; // rdx
  __int64 v502; // rsi
  _QWORD *v503; // r14
  _QWORD *v504; // r15
  __int64 v505; // rax
  _QWORD *v506; // r15
  __int64 v507; // rax
  _QWORD *v508; // r15
  _QWORD *v509; // rbx
  __int64 v510; // rax
  _QWORD *v511; // r15
  _QWORD *v512; // rbx
  __int64 v513; // rax
  _QWORD *v514; // r15
  __int64 v515; // rax
  _QWORD *v516; // r15
  _QWORD *v517; // rbx
  __int64 v518; // rax
  _QWORD *v519; // r8
  __int64 v520; // rax
  _QWORD *v521; // r15
  __int64 v522; // rsi
  __int64 v523; // rdi
  _QWORD *v524; // rbx
  _QWORD *v525; // rax
  __int64 v526; // rdx
  __int64 v527; // rsi
  _QWORD *v528; // r14
  _QWORD *v529; // r15
  _QWORD *v530; // r15
  _QWORD *v531; // r15
  _QWORD *v532; // r15
  _QWORD *v533; // r15
  _QWORD *v534; // rbx
  __int64 v535; // rax
  _QWORD *v536; // r8
  __int64 v537; // rax
  _QWORD *v538; // r15
  __int64 v539; // rsi
  __int64 v540; // rdi
  _QWORD *v541; // rbx
  _QWORD *v542; // rax
  __int64 v543; // rdx
  __int64 v544; // rsi
  _QWORD *v545; // r14
  _QWORD *v546; // r15
  __int64 v547; // rax
  _QWORD *v548; // r15
  __int64 v549; // rax
  _QWORD *v550; // r15
  __int64 v551; // rax
  _QWORD *v552; // r15
  __int64 v553; // rax
  _QWORD *v554; // r15
  _QWORD *v555; // rbx
  __int64 v556; // rax
  _QWORD *v557; // r8
  __int64 v558; // rax
  _QWORD *v559; // r15
  __int64 v560; // rsi
  __int64 v561; // rdi
  _QWORD *v562; // rbx
  _QWORD *v563; // rax
  __int64 v564; // rdx
  __int64 v565; // rsi
  _QWORD *v566; // rbx
  __int64 v567; // rbx
  __int64 v568; // rax
  _QWORD *v569; // rbx
  __int64 v570; // r15
  __int64 v571; // rax
  _QWORD *v572; // r14
  __int64 v573; // r15
  __int64 v574; // rsi
  __int64 v575; // rax
  int v576; // ecx
  _QWORD *v577; // r9
  int v578; // r8d
  _QWORD *v579; // r14
  __int64 v580; // rbx
  __int64 v581; // rsi
  _QWORD *v582; // r14
  _QWORD *v583; // r15
  __int64 v584; // r14
  __int64 v585; // rsi
  __int64 v586; // rax
  __int64 v587; // r14
  __int64 v588; // rsi
  __int64 v589; // rax
  _QWORD *v590; // rbx
  __int64 v591; // rsi
  __int64 v592; // rax
  __int64 v593; // rax
  _QWORD *v594; // r14
  int v595; // edx
  int v596; // esi
  int v597; // ecx
  _QWORD *v598; // r14
  __int64 v599; // r15
  __int64 v600; // rsi
  _QWORD *v601; // rbx
  __int64 v602; // r15
  __int64 v603; // rsi
  __int64 v604; // rax
  _QWORD *v605; // rbx
  _QWORD *v606; // r14
  __int64 v607; // r15
  __int64 v608; // rsi
  _QWORD *v609; // rbx
  __int64 v610; // r15
  __int64 v611; // rsi
  __int64 v612; // rax
  _QWORD *v613; // rbx
  __int64 v614; // rsi
  __int64 v615; // rax
  __int64 v616; // rax
  _QWORD *v617; // r15
  _QWORD *v618; // r14
  __int64 v619; // r14
  __int64 v620; // rsi
  _QWORD *v621; // rbx
  __int64 v622; // rbx
  __int64 v623; // r14
  __int64 v624; // rsi
  __int64 v625; // rax
  __int64 v626; // rax
  _QWORD *v627; // r14
  __int64 v628; // r14
  __int64 v629; // rsi
  __int64 v630; // rax
  _QWORD *v631; // rbx
  __int64 v632; // rsi
  __int64 v633; // rbx
  __int64 v634; // rax
  _QWORD *v635; // r14
  __int64 v636; // rax
  __int64 v637; // rsi
  _QWORD *v638; // rbx
  _QWORD *v639; // rax
  __int64 v640; // rax
  __int64 v641; // rax
  __int64 v642; // rbx
  __int64 v643; // rax
  _QWORD *v644; // rbx
  _QWORD *v645; // r14
  __int64 v646; // r14
  __int64 v647; // rsi
  _QWORD *v648; // rbx
  __int64 v649; // r14
  __int64 v650; // rax
  __int64 v651; // rsi
  _QWORD *v652; // rbx
  _QWORD *v653; // rax
  __int64 v654; // rax
  __int64 v655; // rax
  _QWORD *v656; // r14
  _QWORD *v657; // r14
  _QWORD *v658; // rbx
  __int64 v659; // rax
  _QWORD *v660; // r15
  __int64 v661; // rax
  __int64 v662; // rax
  _QWORD *v663; // r14
  __int64 v664; // rsi
  __int64 v665; // rdi
  _QWORD *v666; // rbx
  _QWORD *v667; // rax
  __int64 v668; // rdx
  __int64 v669; // rsi
  _QWORD *v670; // r14
  __int64 v671; // rbx
  __int64 v672; // rax
  _QWORD *v673; // r15
  __int64 v674; // rax
  __int64 v675; // rbx
  _QWORD *v676; // r15
  int v677; // ecx
  int v678; // r8d
  int v679; // r9d
  __int64 v680; // rsi
  _QWORD *v681; // rbx
  _QWORD *v682; // r15
  __int64 v683; // rbx
  __int64 v684; // rsi
  __int64 v685; // rax
  _QWORD *v686; // r15
  __int64 v687; // rsi
  _QWORD *v688; // rbx
  __int64 v689; // rbx
  __int64 v690; // rsi
  __int64 v691; // rax
  _QWORD *v692; // r15
  __int64 v693; // rsi
  _QWORD *v694; // rbx
  __int64 v695; // rbx
  __int64 v696; // rsi
  __int64 v697; // rax
  _QWORD *v698; // r15
  _QWORD *v699; // r15
  __int64 v700; // rax
  _QWORD *v701; // rbx
  __int64 v702; // rax
  __int64 v703; // rax
  _QWORD *v704; // r15
  __int64 v705; // r14
  _QWORD *v706; // r15
  __int64 v707; // r14
  __int64 v708; // rsi
  __int64 v709; // rax
  _QWORD *v710; // rbx
  __int64 v711; // rax
  __int64 v712; // r14
  _QWORD *v713; // r15
  __int64 v714; // r14
  __int64 v715; // rsi
  __int64 v716; // rax
  _QWORD *v717; // rbx
  __int64 v718; // rax
  __int64 v719; // r15
  __int64 v720; // rsi
  _QWORD *v721; // rbx
  _QWORD *v722; // r14
  __int64 v723; // r15
  __int64 v724; // rsi
  __int64 v725; // rax
  _QWORD *v726; // rbx
  __int64 v727; // rax
  __int64 v728; // r14
  __int64 v729; // rbx
  _QWORD *v730; // r15
  __int64 v731; // r14
  __int64 v732; // rdx
  __int64 v733; // rax
  __int64 v734; // rax
  __int64 v735; // rax
  __int64 v736; // rax
  int v737; // eax
  _QWORD *v738; // r14
  __int64 v739; // rax
  int v740; // eax
  _QWORD *v741; // rbx
  _QWORD *v742; // r14
  __int64 v743; // rax
  _QWORD *v744; // r15
  __int64 v745; // rax
  int v746; // eax
  __int64 v747; // r13
  __int64 v748; // rbx
  __int64 v749; // rax
  _QWORD *v750; // r15
  __int64 v751; // rbx
  __int64 v752; // rax
  _QWORD *v753; // r13
  __int64 v754; // rax
  __int64 v755; // rbx
  __int64 v756; // rbx
  __int64 v757; // r13
  _QWORD *v758; // r15
  _QWORD *v759; // rcx
  unsigned int v760; // r14d
  __int64 v761; // rax
  __int64 v762; // rax
  __int64 v763; // rax
  _QWORD *v764; // rdi
  __int64 v765; // rbx
  __int64 v766; // rax
  __int64 v767; // rax
  __int64 v768; // rax
  __int64 v769; // rdi
  __int64 result; // rax
  __int64 v771; // rax
  __int64 v772; // rax
  __int64 v773; // r13
  __int64 v774; // rbx
  __int64 v775; // r13
  __int64 v776; // rbx
  __int64 v777; // rax
  __int64 v778; // rax
  __int64 v779; // rax
  __int64 v780; // rax
  __int64 v781; // rax
  __int64 v782; // rax
  __int64 v783; // rax
  __int64 v784; // rax
  __int64 v785; // rax
  __int64 v786; // rax
  __int64 v787; // r13
  __int64 v788; // rbx
  __int64 v789; // r13
  __int64 v790; // rbx
  __int64 v791; // rax
  __int64 v792; // rax
  __int64 v793; // r13
  __int64 v794; // rbx
  __int64 v795; // r13
  __int64 v796; // rbx
  __int64 v797; // rax
  __int64 v798; // rax
  __int64 v799; // rax
  __int64 v800; // rax
  __int64 v801; // rax
  __int64 v802; // rax
  __int64 v803; // r13
  _QWORD *v804; // rax
  __int64 v805; // rbx
  __int64 v806; // rax
  __int64 v807; // rax
  __int64 v808; // rax
  __int64 v809; // rax
  __int64 v810; // rax
  __int64 v811; // rax
  __int64 v812; // rax
  __int64 v813; // rax
  __int64 v814; // r13
  _QWORD *v815; // rax
  __int64 v816; // rbx
  __int64 v817; // rax
  __int64 v818; // rax
  __int64 v819; // rax
  __int64 v820; // rax
  __int64 v821; // rax
  __int64 v822; // rax
  __int64 v823; // r13
  __int64 v824; // rbx
  __int64 v825; // rax
  __int64 v826; // rax
  __int64 v827; // r13
  _QWORD *v828; // rax
  __int64 v829; // rbx
  __int64 v830; // rax
  __int64 v831; // rax
  __int64 v832; // rax
  __int64 v833; // rax
  __int64 v834; // r13
  _QWORD *v835; // rax
  __int64 v836; // rbx
  __int64 v837; // rax
  __int64 v838; // rax
  __int64 v839; // rax
  __int64 v840; // rax
  _QWORD *v841; // rax
  __int64 v842; // rax
  __int64 v843; // rax
  __int64 v844; // rax
  __int64 v845; // rax
  __int64 v846; // r15
  __int64 v847; // rax
  int v848; // ecx
  int v849; // eax
  int v850; // ecx
  int v851; // r9d
  int v852; // r8d
  int v853; // ebx
  int v854; // eax
  int v855; // ebx
  int v856; // eax
  _QWORD *v857; // rbx
  _QWORD *v858; // rax
  _QWORD *v859; // r15
  _QWORD *v860; // rbx
  _QWORD *v861; // rbx
  __int64 v862; // rax
  __int64 v863; // rax
  __int64 v864; // rax
  __int64 v865; // rax
  __int64 v866; // rax
  int v867; // r8d
  int v868; // ecx
  int v869; // esi
  __int64 v870; // rax
  __int64 v871; // rax
  __int64 v872; // rax
  _QWORD *v873; // r14
  __int64 v874; // rsi
  _QWORD *v875; // r15
  __int64 v876; // rbx
  __int64 v877; // rax
  _QWORD *v878; // rbx
  __int64 v879; // rsi
  _QWORD *v880; // r15
  _QWORD *v881; // r14
  __int64 v882; // r15
  __int64 v883; // rsi
  __int64 v884; // rax
  __int64 v885; // rax
  __int64 v886; // r14
  _QWORD *v887; // rbx
  __int64 v888; // r14
  __int64 v889; // rsi
  __int64 v890; // rax
  __int64 v891; // rax
  __int64 v892; // rax
  __int64 v893; // rax
  __int64 v894; // rax
  __int64 v895; // rax
  _QWORD *v896; // rbx
  _QWORD *v897; // r14
  __int64 v898; // rsi
  __int64 v899; // rax
  __int64 v900; // rax
  __int64 v901; // rax
  __int64 v902; // rax
  __int64 v903; // r14
  __int64 v904; // rax
  __int64 v905; // rbx
  __int64 v906; // rax
  __int64 v907; // r14
  _QWORD *v908; // rbx
  __int64 v909; // r14
  __int64 v910; // rdx
  __int64 v911; // rax
  __int64 v912; // rax
  __int64 v913; // rax
  __int64 v914; // rax
  __int64 v915; // rax
  __int64 v916; // rax
  __int64 v917; // rax
  __int64 v918; // rbx
  __int64 v919; // r14
  __int64 v920; // rax
  __int64 v921; // rax
  __int64 v922; // rax
  __int64 v923; // rbx
  _QWORD *v924; // r14
  __int64 v925; // rbx
  __int64 v926; // rdx
  int v927; // ecx
  int v928; // esi
  __int64 v929; // rax
  __int64 v930; // rax
  __int64 v931; // rax
  __int64 v932; // rbx
  _QWORD *v933; // r14
  __int64 v934; // r15
  __int64 v935; // rdx
  __int64 v936; // rax
  __int64 v937; // rax
  __int64 v938; // rax
  __int64 v939; // r14
  __int64 v940; // r15
  __int64 v941; // rbx
  __int64 v942; // rax
  __int64 v943; // rax
  __int64 v944; // rax
  __int64 v945; // rax
  __int64 v946; // rax
  __int64 v947; // r14
  __int64 v948; // r15
  __int64 v949; // rbx
  __int64 v950; // rax
  __int64 v951; // rax
  _QWORD *v952; // rax
  _QWORD *v953; // rsi
  _QWORD *v954; // rax
  __int64 v955; // rax
  __int64 v956; // rax
  _QWORD *v957; // rax
  _QWORD *v958; // rdi
  _QWORD *v959; // rdi
  __int64 v960; // rax
  __int64 v961; // rax
  _QWORD *v962; // rax
  _QWORD *v963; // rdi
  __int64 v964; // rax
  __int64 v965; // rax
  _QWORD *v966; // rax
  __int64 v967; // rax
  __int64 v968; // rax
  _QWORD *v969; // rax
  __int64 v970; // rax
  __int64 v971; // rax
  _QWORD *v972; // rdi
  __int64 v973; // rax
  __int64 v974; // rax
  __int64 v975; // rax
  __int64 v976; // rax
  _QWORD *v977; // rax
  __m128i v978; // kr00_16
  _QWORD *v979; // rbx
  __int64 v980; // rax
  __int64 v981; // rax
  _QWORD *v982; // rax
  __int64 v983; // rax
  __int64 v984; // rsi
  __int64 v985; // rax
  _QWORD *v986; // rax
  _QWORD *v987; // r13
  __int64 v988; // rax
  _QWORD *v989; // rdi
  __int64 v990; // rbx
  __int64 v991; // rax
  _QWORD *v992; // rdi
  __int64 v993; // r13
  __int64 v994; // rax
  __int64 v995; // rax
  _QWORD *v996; // rax
  __int64 v997; // rax
  __int64 v998; // rax
  _QWORD *v999; // rax
  __int64 v1000; // rax
  __int64 v1001; // rax
  _QWORD *v1002; // rax
  __int64 v1003; // rax
  __int64 v1004; // rax
  _QWORD *v1005; // rax
  __int64 v1006; // rax
  __int64 v1007; // rax
  _QWORD *v1008; // rax
  _QWORD *v1009; // rdi
  __int64 v1010; // rax
  __int64 v1011; // rax
  __int64 v1012; // rax
  __int64 v1013; // rax
  _QWORD *v1014; // rax
  __int64 v1015; // rax
  __int64 v1016; // rax
  __int64 v1017; // rax
  __int64 v1018; // rax
  __int64 v1019; // rax
  __int64 v1020; // rax
  __int64 v1021; // rax
  __int64 v1022; // rax
  __int64 v1023; // rax
  __int64 v1024; // rax
  __int64 v1025; // rax
  __int64 v1026; // rax
  __int64 v1027; // r13
  _QWORD *v1028; // rax
  __int64 v1029; // rbx
  __int64 v1030; // rax
  __int64 v1031; // rax
  __int64 v1032; // rax
  __int64 v1033; // rax
  __int64 v1034; // r13
  _QWORD *v1035; // rax
  __int64 v1036; // rbx
  __int64 v1037; // rax
  __int64 v1038; // rax
  __int64 v1039; // rax
  __int64 v1040; // rax
  __int64 v1041; // r13
  _QWORD *v1042; // rax
  __int64 v1043; // rbx
  __int64 v1044; // rax
  __int64 v1045; // rax
  __int64 v1046; // rax
  __int64 v1047; // rax
  __int64 v1048; // r13
  _QWORD *v1049; // rax
  __int64 v1050; // rbx
  __int64 v1051; // rax
  __int64 v1052; // rax
  __int64 v1053; // rax
  __int64 v1054; // rax
  __int64 v1055; // r13
  _QWORD *v1056; // rax
  __int64 v1057; // rbx
  __int64 v1058; // rax
  __int64 v1059; // rax
  _QWORD *v1060; // rdi
  __int64 v1061; // rax
  __int64 v1062; // rax
  __int64 v1063; // rax
  __int64 v1064; // rax
  __int64 *v1065; // rax
  __int64 v1066; // rax
  __int64 v1067; // rax
  __int64 v1068; // rax
  __int64 v1069; // rax
  _QWORD *v1070; // rax
  _QWORD *v1071; // rax
  __int64 v1072; // rax
  __int64 v1073; // rax
  __int64 v1074; // rax
  __int64 v1075; // rax
  __int64 v1076; // r13
  _QWORD *v1077; // rax
  __int64 v1078; // rbx
  __int64 v1079; // rax
  __int64 v1080; // rax
  __int64 v1081; // rax
  __int64 v1082; // rax
  __int64 v1083; // rax
  __int64 v1084; // rax
  _QWORD *v1085; // rax
  __int64 v1086; // r14
  __int64 v1087; // rsi
  __int64 v1088; // rax
  _QWORD *v1089; // r15
  __int64 v1090; // rax
  __int64 v1091; // rax
  __int64 v1092; // rax
  __int64 v1093; // rax
  __int64 v1094; // rax
  _QWORD *v1095; // rax
  __int64 v1096; // rax
  __int64 v1097; // rax
  _QWORD *v1098; // rax
  __m128i v1099; // kr10_16
  __int64 v1100; // rax
  unsigned int v1101; // r13d
  __int64 v1102; // rax
  _QWORD *v1103; // rax
  _QWORD *v1104; // rbx
  __int64 v1105; // rax
  _QWORD *v1106; // rdi
  __int64 v1107; // r13
  __int64 v1108; // rax
  _QWORD *v1109; // rdi
  __int64 v1110; // rbx
  __int64 v1111; // rax
  __int64 v1112; // rax
  _QWORD *v1113; // rax
  __int64 v1114; // rax
  __int64 v1115; // rax
  _QWORD *v1116; // rax
  __int64 v1117; // rax
  __int64 v1118; // rax
  _QWORD *v1119; // rax
  __int64 v1120; // rax
  __int64 v1121; // rax
  _QWORD *v1122; // rax
  __int64 v1123; // rax
  __int64 v1124; // rax
  _QWORD *v1125; // rax
  __int64 v1126; // rax
  __int64 v1127; // rax
  _QWORD *v1128; // rax
  __int64 v1129; // rax
  __int64 v1130; // rax
  _QWORD *v1131; // rax
  __int64 v1132; // r13
  __int64 v1133; // rbx
  __int64 v1134; // rax
  unsigned int v1135; // r13d
  __int64 v1136; // rax
  _QWORD *v1137; // rax
  _QWORD *v1138; // rbx
  __int64 v1139; // rax
  _QWORD *v1140; // rdi
  __int64 v1141; // r13
  __int64 v1142; // rax
  _QWORD *v1143; // rdi
  __int64 v1144; // rbx
  __int64 v1145; // rax
  __int64 v1146; // rax
  _QWORD *v1147; // rax
  __int64 *v1148; // rax
  __int64 *v1149; // rax
  __int64 v1150; // rax
  __int64 v1151; // rax
  _QWORD *v1152; // rax
  __int64 v1153; // rax
  __int64 v1154; // rax
  _QWORD *v1155; // rax
  __int64 v1156; // rax
  __int64 v1157; // rax
  _QWORD *v1158; // rax
  __int64 v1159; // rax
  __int64 v1160; // rax
  _QWORD *v1161; // rax
  __int64 v1162; // rax
  __int64 v1163; // rax
  _QWORD *v1164; // rax
  __int64 v1165; // rax
  __int64 v1166; // rax
  _QWORD *v1167; // rax
  __int64 v1168; // rax
  __int64 v1169; // rax
  _QWORD *v1170; // rax
  __int64 v1171; // rax
  __int64 v1172; // rax
  _QWORD *v1173; // rax
  __int64 v1174; // rax
  __int64 v1175; // rax
  _QWORD *v1176; // rax
  __int64 v1177; // rax
  __int64 v1178; // rax
  _QWORD *v1179; // rax
  __int64 v1180; // rax
  __int64 v1181; // rax
  _QWORD *v1182; // rax
  __int64 v1183; // rax
  __int64 v1184; // rax
  _QWORD *v1185; // rax
  __int64 v1186; // rax
  __int64 v1187; // rax
  _QWORD *v1188; // rax
  __int64 v1189; // rax
  __int64 v1190; // rax
  _QWORD *v1191; // rax
  __int64 v1192; // r13
  __int64 v1193; // rbx
  __int64 v1194; // r13
  __int64 v1195; // rbx
  __int64 v1196; // r13
  __int64 v1197; // rbx
  __int64 v1198; // rax
  __int64 v1199; // rax
  _QWORD *v1200; // rax
  __m128i v1201; // kr20_16
  __int64 v1202; // rax
  __int64 v1203; // rsi
  __int64 v1204; // rax
  _QWORD *v1205; // rax
  _QWORD *v1206; // rbx
  __int64 v1207; // rax
  _QWORD *v1208; // rdi
  __int64 v1209; // r13
  __int64 v1210; // rax
  _QWORD *v1211; // rdi
  __int64 v1212; // rbx
  __int64 v1213; // rax
  __int64 v1214; // rax
  _QWORD *v1215; // rax
  __int64 v1216; // rax
  __int64 v1217; // rax
  _QWORD *v1218; // rax
  __int64 v1219; // rax
  __int64 v1220; // rax
  _QWORD *v1221; // rax
  __int64 v1222; // rax
  __int64 v1223; // rax
  _QWORD *v1224; // rax
  __int64 v1225; // rax
  __int64 v1226; // rax
  _QWORD *v1227; // rax
  __int64 v1228; // rax
  __int64 v1229; // rax
  _QWORD *v1230; // rax
  __int64 v1231; // rax
  __int64 v1232; // rax
  _QWORD *v1233; // rax
  __int64 v1234; // rax
  __int64 v1235; // rax
  _QWORD *v1236; // rax
  __int64 v1237; // rax
  __int64 v1238; // rax
  _QWORD *v1239; // rax
  __int64 v1240; // rax
  __int64 v1241; // rax
  _QWORD *v1242; // rax
  __int64 v1243; // rax
  __int64 v1244; // rax
  _QWORD *v1245; // rax
  __int64 v1246; // rax
  __int64 v1247; // rax
  _QWORD *v1248; // rax
  __int64 v1249; // rax
  __int64 v1250; // rax
  _QWORD *v1251; // rax
  __int64 v1252; // rax
  __int64 v1253; // rax
  _QWORD *v1254; // rax
  __int64 v1255; // rax
  __int64 v1256; // rax
  _QWORD *v1257; // rax
  __int64 v1258; // rax
  __int64 v1259; // rax
  _QWORD *v1260; // rax
  __int64 v1261; // rax
  __int64 v1262; // rax
  _QWORD *v1263; // rax
  __int64 v1264; // rax
  __int64 v1265; // rax
  __int64 *v1266; // rax
  __m128i v1267; // xmm6
  _QWORD *v1268; // rcx
  _QWORD *v1269; // rdx
  _QWORD *v1270; // rax
  _QWORD *v1271; // r14
  __int64 v1272; // rax
  _QWORD *v1273; // rdi
  __int64 v1274; // rbx
  __int64 v1275; // r15
  __int64 v1276; // rsi
  __int64 v1277; // rax
  _QWORD *v1278; // r14
  __int64 v1279; // rax
  _QWORD *v1280; // rbx
  __int64 v1281; // rax
  _QWORD *v1282; // r14
  __int64 v1283; // rax
  __int64 v1284; // rax
  _QWORD *v1285; // rax
  __m128i v1286; // kr30_16
  _QWORD *v1287; // rbx
  __m128i v1288; // kr40_16
  __int64 v1289; // rax
  __int64 v1290; // rax
  _QWORD *v1291; // rax
  __m128i v1292; // xmm5
  _QWORD *v1293; // rcx
  _QWORD *v1294; // rdx
  _QWORD *v1295; // rax
  _QWORD *v1296; // r14
  __int64 v1297; // rax
  _QWORD *v1298; // rdi
  __int64 v1299; // rbx
  __int64 v1300; // r15
  __int64 v1301; // rsi
  __int64 v1302; // rax
  _QWORD *v1303; // r14
  __int64 v1304; // rax
  _QWORD *v1305; // rbx
  __int64 v1306; // rax
  _QWORD *v1307; // r14
  __int64 v1308; // rax
  __int64 v1309; // rax
  _QWORD *v1310; // rax
  __m128i v1311; // kr50_16
  _QWORD *v1312; // rbx
  __m128i v1313; // kr60_16
  __int64 v1314; // rax
  __int64 v1315; // rax
  _QWORD *v1316; // rax
  __m128i v1317; // xmm4
  _QWORD *v1318; // rcx
  _QWORD *v1319; // rdx
  _QWORD *v1320; // rax
  _QWORD *v1321; // r14
  __int64 v1322; // rax
  _QWORD *v1323; // rdi
  __int64 v1324; // rbx
  __int64 v1325; // r15
  __int64 v1326; // rsi
  __int64 v1327; // rax
  _QWORD *v1328; // r14
  __int64 v1329; // rax
  _QWORD *v1330; // rbx
  __int64 v1331; // rax
  _QWORD *v1332; // r14
  __int64 v1333; // rax
  __int64 v1334; // rax
  _QWORD *v1335; // rax
  __m128i v1336; // kr70_16
  _QWORD *v1337; // rbx
  __m128i v1338; // kr80_16
  __int64 v1339; // rax
  __int64 v1340; // rax
  _QWORD *v1341; // rax
  __m128i v1342; // xmm3
  _QWORD *v1343; // rcx
  _QWORD *v1344; // rdx
  _QWORD *v1345; // rax
  _QWORD *v1346; // r14
  __int64 v1347; // rax
  _QWORD *v1348; // rdi
  __int64 v1349; // rbx
  __int64 v1350; // r15
  __int64 v1351; // rsi
  __int64 v1352; // rax
  _QWORD *v1353; // r14
  __int64 v1354; // rax
  _QWORD *v1355; // rbx
  __int64 v1356; // rax
  _QWORD *v1357; // r14
  __int64 v1358; // rax
  __int64 v1359; // rax
  _QWORD *v1360; // rax
  __m128i v1361; // kr90_16
  _QWORD *v1362; // rbx
  __m128i v1363; // krA0_16
  __int64 v1364; // rax
  __int64 v1365; // rax
  _QWORD *v1366; // rax
  __m128i v1367; // xmm2
  _QWORD *v1368; // rcx
  _QWORD *v1369; // rdx
  _QWORD *v1370; // rax
  _QWORD *v1371; // r14
  __int64 v1372; // rax
  _QWORD *v1373; // rdi
  __int64 v1374; // rbx
  __int64 v1375; // r15
  __int64 v1376; // rsi
  __int64 v1377; // rax
  _QWORD *v1378; // r14
  __int64 v1379; // rax
  _QWORD *v1380; // rbx
  __int64 v1381; // rax
  _QWORD *v1382; // r14
  __int64 v1383; // rax
  __int64 v1384; // rax
  _QWORD *v1385; // rax
  __m128i v1386; // krB0_16
  _QWORD *v1387; // rbx
  __m128i v1388; // krC0_16
  __int64 v1389; // rax
  __int64 v1390; // rax
  _QWORD *v1391; // rax
  __m128i v1392; // xmm1
  _QWORD *v1393; // rcx
  _QWORD *v1394; // rdx
  _QWORD *v1395; // rax
  _QWORD *v1396; // r14
  __int64 v1397; // rax
  _QWORD *v1398; // rdi
  __int64 v1399; // rbx
  __int64 v1400; // r15
  __int64 v1401; // rsi
  __int64 v1402; // rax
  _QWORD *v1403; // r14
  __int64 v1404; // rax
  _QWORD *v1405; // rbx
  __int64 v1406; // rax
  _QWORD *v1407; // r14
  __int64 v1408; // rax
  __int64 v1409; // rax
  _QWORD *v1410; // rax
  __m128i v1411; // krD0_16
  _QWORD *v1412; // rbx
  __m128i v1413; // krE0_16
  __int64 v1414; // rax
  __int64 v1415; // rax
  _QWORD *v1416; // rax
  __int64 *v1417; // rax
  __int64 v1418; // rax
  __int64 v1419; // rax
  _QWORD *v1420; // rdi
  __int64 v1421; // rax
  __int64 v1422; // rax
  __int64 v1423; // rax
  __int64 v1424; // rax
  _QWORD *v1425; // rax
  __int64 v1426; // rax
  _QWORD *v1427; // r14
  __int64 v1428; // rax
  __int64 v1429; // r15
  __int64 v1430; // rax
  __int64 v1431; // rax
  _QWORD *v1432; // rax
  int v1433[2]; // [rsp+8h] [rbp-250h]
  _QWORD *v1434; // [rsp+8h] [rbp-250h]
  int v1435[2]; // [rsp+8h] [rbp-250h]
  int v1436[2]; // [rsp+8h] [rbp-250h]
  int v1437[2]; // [rsp+8h] [rbp-250h]
  int v1438[2]; // [rsp+8h] [rbp-250h]
  _QWORD *v1439; // [rsp+8h] [rbp-250h]
  _QWORD *v1440; // [rsp+8h] [rbp-250h]
  int v1441[2]; // [rsp+8h] [rbp-250h]
  int v1442[2]; // [rsp+8h] [rbp-250h]
  int v1443[2]; // [rsp+8h] [rbp-250h]
  int v1444[2]; // [rsp+8h] [rbp-250h]
  _QWORD *v1445; // [rsp+8h] [rbp-250h]
  __int64 v1446; // [rsp+10h] [rbp-248h]
  __int64 v1447; // [rsp+10h] [rbp-248h]
  __int64 v1448; // [rsp+10h] [rbp-248h]
  __int64 v1449; // [rsp+10h] [rbp-248h]
  __int64 v1450; // [rsp+10h] [rbp-248h]
  _QWORD *v1451; // [rsp+10h] [rbp-248h]
  __int64 v1452; // [rsp+10h] [rbp-248h]
  _QWORD *v1453; // [rsp+10h] [rbp-248h]
  __int64 v1454; // [rsp+10h] [rbp-248h]
  _QWORD *v1455; // [rsp+10h] [rbp-248h]
  __int64 v1456; // [rsp+10h] [rbp-248h]
  _QWORD *v1457; // [rsp+10h] [rbp-248h]
  __int64 v1458; // [rsp+10h] [rbp-248h]
  _QWORD *v1459; // [rsp+10h] [rbp-248h]
  __int64 v1460; // [rsp+10h] [rbp-248h]
  __int64 v1461; // [rsp+10h] [rbp-248h]
  _QWORD *v1462; // [rsp+10h] [rbp-248h]
  __int64 v1463; // [rsp+10h] [rbp-248h]
  _QWORD *v1464; // [rsp+10h] [rbp-248h]
  _QWORD *v1465; // [rsp+18h] [rbp-240h]
  __int64 v1466; // [rsp+18h] [rbp-240h]
  _QWORD *v1467; // [rsp+18h] [rbp-240h]
  _QWORD *v1468; // [rsp+18h] [rbp-240h]
  __int64 v1469; // [rsp+18h] [rbp-240h]
  _QWORD *v1470; // [rsp+18h] [rbp-240h]
  _QWORD *v1471; // [rsp+18h] [rbp-240h]
  __int64 v1472; // [rsp+18h] [rbp-240h]
  _QWORD *v1473; // [rsp+18h] [rbp-240h]
  _QWORD *v1474; // [rsp+18h] [rbp-240h]
  __int64 v1475; // [rsp+18h] [rbp-240h]
  _QWORD *v1476; // [rsp+18h] [rbp-240h]
  _QWORD *v1477; // [rsp+18h] [rbp-240h]
  __int64 v1478; // [rsp+18h] [rbp-240h]
  _QWORD *v1479; // [rsp+18h] [rbp-240h]
  _QWORD *v1480; // [rsp+18h] [rbp-240h]
  __int64 v1481; // [rsp+18h] [rbp-240h]
  _QWORD *v1482; // [rsp+18h] [rbp-240h]
  _QWORD *v1483; // [rsp+18h] [rbp-240h]
  __int64 v1484; // [rsp+18h] [rbp-240h]
  _QWORD *v1485; // [rsp+18h] [rbp-240h]
  _QWORD *v1486; // [rsp+18h] [rbp-240h]
  __int64 v1487; // [rsp+18h] [rbp-240h]
  _QWORD *v1488; // [rsp+18h] [rbp-240h]
  _QWORD *v1489; // [rsp+18h] [rbp-240h]
  _QWORD *v1490; // [rsp+18h] [rbp-240h]
  _QWORD *v1491; // [rsp+18h] [rbp-240h]
  _QWORD *v1492; // [rsp+20h] [rbp-238h]
  _QWORD *v1493; // [rsp+20h] [rbp-238h]
  _QWORD *v1494; // [rsp+20h] [rbp-238h]
  __int64 v1495; // [rsp+20h] [rbp-238h]
  _QWORD *v1496; // [rsp+20h] [rbp-238h]
  _QWORD *v1497; // [rsp+20h] [rbp-238h]
  _QWORD *v1498; // [rsp+28h] [rbp-230h]
  __int64 v1499; // [rsp+28h] [rbp-230h]
  __int64 v1500; // [rsp+28h] [rbp-230h]
  _QWORD *v1501; // [rsp+28h] [rbp-230h]
  __int64 v1502; // [rsp+28h] [rbp-230h]
  _QWORD *v1503; // [rsp+28h] [rbp-230h]
  __int64 v1504; // [rsp+28h] [rbp-230h]
  _QWORD *v1505; // [rsp+28h] [rbp-230h]
  _QWORD *v1506; // [rsp+28h] [rbp-230h]
  _QWORD *v1507; // [rsp+28h] [rbp-230h]
  _QWORD *v1508; // [rsp+28h] [rbp-230h]
  int v1509[2]; // [rsp+30h] [rbp-228h]
  _QWORD *v1510; // [rsp+30h] [rbp-228h]
  _QWORD *v1511; // [rsp+30h] [rbp-228h]
  int v1512[2]; // [rsp+30h] [rbp-228h]
  _QWORD *v1513; // [rsp+30h] [rbp-228h]
  int v1514[2]; // [rsp+30h] [rbp-228h]
  int v1515[2]; // [rsp+30h] [rbp-228h]
  int v1516[2]; // [rsp+30h] [rbp-228h]
  _QWORD *v1517; // [rsp+38h] [rbp-220h]
  __int64 v1518; // [rsp+38h] [rbp-220h]
  __int64 v1519; // [rsp+38h] [rbp-220h]
  __int64 v1520; // [rsp+38h] [rbp-220h]
  __int64 v1521; // [rsp+38h] [rbp-220h]
  __int64 v1522; // [rsp+38h] [rbp-220h]
  _QWORD *v1523; // [rsp+38h] [rbp-220h]
  __int64 v1524; // [rsp+40h] [rbp-218h]
  __int64 v1525; // [rsp+40h] [rbp-218h]
  __int64 v1526; // [rsp+48h] [rbp-210h]
  __int64 v1527; // [rsp+48h] [rbp-210h]
  _QWORD *v1528; // [rsp+48h] [rbp-210h]
  const char *v1529; // [rsp+58h] [rbp-200h] BYREF
  _QWORD v1530[4]; // [rsp+60h] [rbp-1F8h] BYREF
  __m128i v1531; // [rsp+80h] [rbp-1D8h] BYREF
  _QWORD *v1532; // [rsp+90h] [rbp-1C8h]
  _QWORD v1533[4]; // [rsp+A0h] [rbp-1B8h] BYREF
  __m128i v1534; // [rsp+C0h] [rbp-198h] BYREF
  _QWORD *v1535; // [rsp+D0h] [rbp-188h]
  _QWORD v1536[4]; // [rsp+E0h] [rbp-178h] BYREF
  __m128i v1537; // [rsp+100h] [rbp-158h] BYREF
  _QWORD *v1538; // [rsp+110h] [rbp-148h]
  _QWORD v1539[4]; // [rsp+120h] [rbp-138h] BYREF
  __m128i v1540; // [rsp+140h] [rbp-118h] BYREF
  _QWORD *v1541; // [rsp+150h] [rbp-108h]
  _QWORD v1542[4]; // [rsp+160h] [rbp-F8h] BYREF
  __m128i v1543; // [rsp+180h] [rbp-D8h] BYREF
  _QWORD *v1544; // [rsp+190h] [rbp-C8h]
  _QWORD v1545[4]; // [rsp+1A0h] [rbp-B8h] BYREF
  __m128i v1546; // [rsp+1C0h] [rbp-98h] BYREF
  _QWORD *v1547; // [rsp+1D0h] [rbp-88h]
  __m128i v1548; // [rsp+1E0h] [rbp-78h] BYREF
  _QWORD *v1549; // [rsp+1F0h] [rbp-68h]
  _QWORD *v1550; // [rsp+200h] [rbp-58h] BYREF
  __int64 v1551; // [rsp+208h] [rbp-50h]
  unsigned __int64 v1552; // [rsp+218h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 16);
  v1552 = __readfsqword(0x28u);
  qword_390DC08 = a2;
  qword_390DC10 = v5;
  if ( !byte_390E028 )
  {
    if ( !byte_384F838 )
    {
      sub_C7390((__int64)a1, (__int64)&qword_384D540, "__main__");
      byte_384F838 = 1;
    }
    qword_390E020 = sub_AB8E0(qword_384F620);
    qword_390DA28 = sub_B34A0((_QWORD *)qword_390E020, 778, 99, qword_384DF88, (_QWORD *)qword_384F628, 0LL, 1, 0, 0);
    qword_390DA20 = sub_B34A0((_QWORD *)qword_390E020, 761, 99, qword_384DF88, (_QWORD *)qword_384F630, 0LL, 1, 0, 0);
    *(_QWORD *)&qword_390DF68 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  46,
                                  71,
                                  *(__int64 *)&qword_384DD88,
                                  (_QWORD *)qword_384F638,
                                  0LL,
                                  0,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA18 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  630,
                                  67,
                                  *(__int64 *)&qword_384DD88,
                                  (_QWORD *)qword_384F640,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DF58 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1322,
                                  67,
                                  *(__int64 *)&qword_384DD88,
                                  (_QWORD *)qword_384F648,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DF50 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1187,
                                  67,
                                  *(__int64 *)&qword_384DD88,
                                  (_QWORD *)qword_384F640,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA10 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1021,
                                  67,
                                  *(__int64 *)&qword_384DD88,
                                  (_QWORD *)qword_384F640,
                                  0LL,
                                  1,
                                  0,
                                  0);
    qword_390E018 = sub_B34A0((_QWORD *)qword_390E020, 1, 64, qword_384F650, 0LL, 0LL, 0, 0, 0);
    qword_390E010 = sub_B34A0((_QWORD *)qword_390E020, 214, 64, qword_384EF50, (_QWORD *)qword_384F658, 0LL, 0, 0, 0);
    qword_390E000 = sub_B34A0((_QWORD *)qword_390E020, 524, 64, qword_384EA10, (_QWORD *)qword_384F658, 0LL, 0, 0, 0);
    qword_390DFF8 = sub_B34A0((_QWORD *)qword_390E020, 649, 64, qword_384EA58, (_QWORD *)qword_384F658, 0LL, 0, 0, 0);
    qword_390E008 = sub_B34A0((_QWORD *)qword_390E020, 386, 64, qword_384E770, (_QWORD *)qword_384F658, 0LL, 0, 0, 0);
    *(_QWORD *)&qword_390DA40 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  217,
                                  67,
                                  *(__int64 *)&qword_384F340,
                                  (_QWORD *)qword_384F660,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA90 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  268,
                                  67,
                                  *(__int64 *)&qword_384F340,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DAC0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  315,
                                  67,
                                  *(__int64 *)&qword_384F340,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB40 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  525,
                                  67,
                                  *(__int64 *)&qword_384F340,
                                  (_QWORD *)qword_384F670,
                                  0LL,
                                  3,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB88 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  650,
                                  67,
                                  *(__int64 *)&qword_384F340,
                                  (_QWORD *)qword_384F678,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DAE8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  350,
                                  67,
                                  *(__int64 *)&qword_384F340,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB10 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  387,
                                  67,
                                  *(__int64 *)&qword_384F340,
                                  (_QWORD *)qword_384F680,
                                  0LL,
                                  5,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB90 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  653,
                                  67,
                                  *(__int64 *)&qword_384F560,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB50 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  548,
                                  67,
                                  *(__int64 *)&qword_384DC58,
                                  (_QWORD *)qword_384F688,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB48 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  532,
                                  67,
                                  *(__int64 *)&qword_384DC50,
                                  (_QWORD *)qword_384F690,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA60 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  243,
                                  67,
                                  *(__int64 *)&qword_384D6F8,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA80 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  259,
                                  67,
                                  *(__int64 *)&qword_384D718,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DBF0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  933,
                                  67,
                                  *(__int64 *)&qword_384E140,
                                  (_QWORD *)qword_384F698,
                                  0LL,
                                  3,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB60 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  570,
                                  67,
                                  *(__int64 *)&qword_384EA08,
                                  (_QWORD *)qword_384F6A0,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DBD0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  862,
                                  67,
                                  *(__int64 *)&qword_384E6F0,
                                  (_QWORD *)qword_384F6A8,
                                  0LL,
                                  5,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DAD8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  327,
                                  67,
                                  *(__int64 *)&qword_384D930,
                                  (_QWORD *)qword_384F6B0,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DAD0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  322,
                                  67,
                                  *(__int64 *)&qword_384D8D8,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DF48 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1779,
                                  7,
                                  *(__int64 *)&qword_384EFB8,
                                  (_QWORD *)qword_384F6B8,
                                  (_QWORD *)qword_384F6C0,
                                  0,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB08 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  380,
                                  67,
                                  *(__int64 *)&qword_384D9D8,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DBB0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  743,
                                  67,
                                  *(__int64 *)&qword_384E038,
                                  (_QWORD *)qword_384F6C8,
                                  0LL,
                                  5,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DAA0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  279,
                                  67,
                                  *(__int64 *)&qword_384D838,
                                  (_QWORD *)qword_384F6D0,
                                  0LL,
                                  3,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB38 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  500,
                                  67,
                                  *(__int64 *)&qword_384DD30,
                                  (_QWORD *)qword_384F6D8,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB80 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  641,
                                  67,
                                  *(__int64 *)&qword_384EA70,
                                  (_QWORD *)qword_384F6E0,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DFB0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1455,
                                  67,
                                  *(__int64 *)&qword_384EAF8,
                                  (_QWORD *)qword_384F6E8,
                                  0LL,
                                  10,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DFA8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1437,
                                  67,
                                  *(__int64 *)&qword_384EBD8,
                                  (_QWORD *)qword_384F6F0,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DBA0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  698,
                                  67,
                                  *(__int64 *)&qword_384E6C0,
                                  (_QWORD *)qword_384F6F8,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA98 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  276,
                                  67,
                                  *(__int64 *)&qword_384D7D0,
                                  (_QWORD *)qword_384F700,
                                  0LL,
                                  3,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DAF8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  368,
                                  67,
                                  *(__int64 *)&qword_384EDF8,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DFA0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1424,
                                  67,
                                  *(__int64 *)&qword_384ECA8,
                                  (_QWORD *)qword_384F708,
                                  0LL,
                                  3,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DFB8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1561,
                                  67,
                                  *(__int64 *)&qword_384EDA8,
                                  (_QWORD *)qword_384F710,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DFC8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1627,
                                  67,
                                  *(__int64 *)&qword_384EF98,
                                  (_QWORD *)qword_384F718,
                                  0LL,
                                  0,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DAB0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  296,
                                  67,
                                  *(__int64 *)&qword_384D860,
                                  (_QWORD *)qword_384F720,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA30 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  58,
                                  67,
                                  *(__int64 *)&qword_384E280,
                                  (_QWORD *)qword_384F728,
                                  0LL,
                                  0,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB78 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  599,
                                  67,
                                  *(__int64 *)&qword_384EA30,
                                  (_QWORD *)qword_384F730,
                                  0LL,
                                  4,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB98 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  657,
                                  67,
                                  *(__int64 *)&qword_384E610,
                                  (_QWORD *)qword_384F738,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DF80 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1046,
                                  67,
                                  *(__int64 *)&qword_384ECC8,
                                  (_QWORD *)qword_384F740,
                                  0LL,
                                  10,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB70 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  595,
                                  67,
                                  *(__int64 *)&qword_384DD20,
                                  (_QWORD *)qword_384F748,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB68 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  591,
                                  67,
                                  *(__int64 *)&qword_384DD00,
                                  (_QWORD *)qword_384F750,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DAE0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  333,
                                  67,
                                  *(__int64 *)&qword_384EED0,
                                  (_QWORD *)qword_384F758,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DAC8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  319,
                                  67,
                                  *(__int64 *)&qword_384EEC8,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DFE0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1688,
                                  67,
                                  *(__int64 *)&qword_384EF70,
                                  (_QWORD *)qword_384F760,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA88 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  263,
                                  67,
                                  *(__int64 *)&qword_384D720,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DFE8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1693,
                                  67,
                                  *(__int64 *)&qword_384EF88,
                                  (_QWORD *)qword_384F768,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA38 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  209,
                                  67,
                                  *(__int64 *)&qword_384EDE8,
                                  0LL,
                                  0LL,
                                  0,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB18 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  403,
                                  67,
                                  *(__int64 *)&qword_384DAC8,
                                  (_QWORD *)qword_384F770,
                                  0LL,
                                  3,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DFF0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1708,
                                  67,
                                  *(__int64 *)&qword_384F618,
                                  (_QWORD *)qword_384F778,
                                  0LL,
                                  0,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DBB8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  825,
                                  67,
                                  *(__int64 *)&qword_384E040,
                                  (_QWORD *)qword_384F780,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DBE8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  917,
                                  67,
                                  *(__int64 *)&qword_384E760,
                                  (_QWORD *)qword_384F788,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DBC8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  853,
                                  67,
                                  *(__int64 *)&qword_384E030,
                                  (_QWORD *)qword_384F790,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA68 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  247,
                                  67,
                                  *(__int64 *)&qword_384D700,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB30 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  439,
                                  67,
                                  *(__int64 *)&qword_384DBE8,
                                  (_QWORD *)qword_384F798,
                                  0LL,
                                  4,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB58 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  555,
                                  67,
                                  *(__int64 *)&qword_384DD60,
                                  (_QWORD *)qword_384F7A0,
                                  0LL,
                                  3,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB28 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  426,
                                  67,
                                  *(__int64 *)&qword_384DBE0,
                                  (_QWORD *)qword_384F7A8,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DFD0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1646,
                                  67,
                                  *(__int64 *)&qword_384EFB0,
                                  (_QWORD *)qword_384F7B0,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA50 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  235,
                                  67,
                                  *(__int64 *)&qword_384D6E8,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DF90 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1404,
                                  67,
                                  *(__int64 *)&qword_384EC88,
                                  (_QWORD *)qword_384F7B8,
                                  0LL,
                                  0,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DF88 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1399,
                                  67,
                                  *(__int64 *)&qword_384EB60,
                                  (_QWORD *)qword_384F7C0,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA48 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  231,
                                  67,
                                  *(__int64 *)&qword_384D6E0,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DFD8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1655,
                                  67,
                                  *(__int64 *)&qword_384EFA0,
                                  (_QWORD *)qword_384F7C8,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA78 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  255,
                                  67,
                                  *(__int64 *)&qword_384D710,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DF98 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1410,
                                  67,
                                  *(__int64 *)qword_384EC78,
                                  (_QWORD *)qword_384F7D0,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DF40 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1415,
                                  67,
                                  *(__int64 *)&qword_384EB78,
                                  (_QWORD *)qword_384F7D8,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DB00 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  376,
                                  67,
                                  *(__int64 *)&qword_384EE00,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DBC0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  833,
                                  67,
                                  *(__int64 *)&qword_384E048,
                                  (_QWORD *)qword_384F7E0,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA58 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  239,
                                  67,
                                  *(__int64 *)&qword_384D6F0,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DBF8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  968,
                                  67,
                                  *(__int64 *)&qword_384E790,
                                  (_QWORD *)qword_384F7E8,
                                  0LL,
                                  4,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DBA8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  735,
                                  67,
                                  *(__int64 *)&qword_384DF98,
                                  (_QWORD *)qword_384F7F0,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DBD8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  884,
                                  67,
                                  *(__int64 *)&qword_384E768,
                                  (_QWORD *)qword_384F7F8,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DFC0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1596,
                                  67,
                                  *(__int64 *)&qword_384EFD8,
                                  (_QWORD *)qword_384F800,
                                  0LL,
                                  11,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DC00 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  1027,
                                  67,
                                  *(__int64 *)&qword_384E348,
                                  (_QWORD *)qword_384F808,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DF60 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  41,
                                  67,
                                  *(__int64 *)&qword_384F238,
                                  (_QWORD *)qword_384E0B8,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DAF0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  364,
                                  67,
                                  *(__int64 *)&qword_384EA98,
                                  (_QWORD *)qword_384F810,
                                  0LL,
                                  2,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DA70 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  251,
                                  67,
                                  *(__int64 *)&qword_384D708,
                                  (_QWORD *)qword_384F668,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DAB8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  301,
                                  67,
                                  *(__int64 *)&qword_384EF68,
                                  (_QWORD *)qword_384F818,
                                  0LL,
                                  1,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DAA8 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  286,
                                  67,
                                  *(__int64 *)&qword_384D830,
                                  (_QWORD *)qword_384F820,
                                  0LL,
                                  3,
                                  0,
                                  0);
    *(_QWORD *)&qword_390DBE0 = sub_B34A0(
                                  (_QWORD *)qword_390E020,
                                  906,
                                  67,
                                  *(__int64 *)&qword_384E0A8,
                                  (_QWORD *)qword_384F828,
                                  0LL,
                                  2,
                                  0,
                                  0);
    v6 = sub_B34A0((_QWORD *)qword_390E020, 421, 67, *(__int64 *)&qword_384DB88, (_QWORD *)qword_384F830, 0LL, 2, 0, 0);
    byte_390E028 = 1;
    v5 = qword_390DC10;
    *(_QWORD *)&qword_390DB20 = v6;
  }
  sub_D60B0(v5, qword_384F990, qword_384F840);
  sub_D60B0(qword_390DC10, qword_384F910, &Py_NoneStruct);
  v7 = (_QWORD *)sub_C4A20(qword_390DC10, qword_384F960);
  if ( !v7 || !*v7 )
    sub_D60B0(qword_390DC10, qword_384F960, qword_384F880);
  v8 = sub_CEE90(a3);
  sub_D60B0(qword_390DC10, qword_384F988, v8);
  sub_D60B0(qword_390DC10, qword_384FB50, &Py_NoneStruct);
  v1548 = 0LL;
  v1549 = 0LL;
  sub_D60B0(qword_390DC10, qword_384F008, &Py_NoneStruct);
  sub_D60B0(qword_390DC10, qword_384F010, qword_390E020);
  v9 = qword_384F018;
  v10 = qword_390DC10;
  sub_D60B0(qword_390DC10, qword_384F018, &Py_NoneStruct);
  v11 = PyDict_New(v10, v9);
  sub_D6010(qword_390DC10, qword_384F020, v11);
  v12 = sub_B35D0(qword_390E018, qword_390DC08);
  v13 = a1[3];
  a1[3] = v12;
  if ( v13 )
    *(_QWORD *)(v12 + 24) = v13;
  ++*(_QWORD *)v12;
  *(_BYTE *)(v12 + 116) = 1;
  v14 = qword_384DA70;
  v15 = qword_384F8B0;
  v16 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 1;
  v17 = sub_C3D70(a1, v14, v16, &Py_NoneStruct, &Py_NoneStruct, v15);
  if ( !v17 )
  {
    v766 = a1[11];
    v758 = (_QWORD *)a1[13];
    v760 = 1;
    a1[11] = 0LL;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v766;
    v767 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v767;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384DA70, v17);
  v18 = qword_384F028;
  v19 = qword_384F8B0;
  *(_DWORD *)(v12 + 108) = 2;
  v20 = sub_C3D70(a1, v18, qword_390DC10, &Py_NoneStruct, &Py_NoneStruct, v19);
  if ( !v20 )
  {
    v771 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 2;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v771;
    v772 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v772;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384DAD0, v20);
  v21 = qword_384F030;
  v22 = qword_384F038;
  v23 = qword_384F8B0;
  v24 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 3;
  v25 = sub_C3D70(a1, v21, v24, &Py_NoneStruct, v22, v23);
  v26 = (_QWORD *)v25;
  if ( !v25 )
  {
    v781 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 3;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v781;
    v782 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v782;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v27 = *(void **)(v25 + 8);
  if ( v27 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v27, &PyModule_Type) )
    v28 = sub_C3E00(a1, v26, qword_390DC10, qword_384F040, qword_384F8B0);
  else
    v28 = sub_B0340(a1, v26, qword_384F040);
  v29 = (*v26)-- == 1LL;
  if ( v29 )
  {
    (*(void (__fastcall **)(_QWORD *))(v26[1] + 48LL))(v26);
    if ( v28 )
      goto LABEL_17;
LABEL_830:
    v761 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 3;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v761;
    v762 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v762;
    a1[12] = 0LL;
    if ( v758 )
      goto LABEL_839;
    goto LABEL_831;
  }
  if ( !v28 )
    goto LABEL_830;
LABEL_17:
  sub_D6010(qword_390DC10, qword_384F040, v28);
  v30 = qword_384F048;
  v31 = qword_384F050;
  v32 = qword_384F8B0;
  v33 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 4;
  v34 = sub_C3D70(a1, v30, v33, &Py_NoneStruct, v31, v32);
  v35 = (_QWORD *)v34;
  if ( !v34 )
    goto LABEL_855;
  v36 = *(void **)(v34 + 8);
  if ( v36 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v36, &PyModule_Type) )
    v37 = sub_C3E00(a1, v35, qword_390DC10, qword_384DF48, qword_384F8B0);
  else
    v37 = sub_B0340(a1, v35, qword_384DF48);
  v29 = (*v35)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v35[1] + 48LL))(v35);
  if ( !v37 )
  {
LABEL_855:
    v777 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 4;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v777;
    v778 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v778;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384DF48, v37);
  v38 = qword_384F058;
  v39 = qword_384F060;
  v40 = qword_384F8B0;
  v41 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 5;
  v42 = sub_C3D70(a1, v38, v41, &Py_NoneStruct, v39, v40);
  v43 = (_QWORD *)v42;
  if ( !v42 )
    goto LABEL_856;
  v44 = *(void **)(v42 + 8);
  if ( v44 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v44, &PyModule_Type) )
    v45 = sub_C3E00(a1, v43, qword_390DC10, qword_384DC28, qword_384F8B0);
  else
    v45 = sub_B0340(a1, v43, qword_384DC28);
  v29 = (*v43)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v43[1] + 48LL))(v43);
  if ( !v45 )
  {
LABEL_856:
    v779 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 5;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v779;
    v780 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v780;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384DC28, v45);
  v46 = sub_C8750();
  v47 = sub_B00D0(a1, v46, qword_384DC70);
  sub_D6010(qword_390DC10, qword_384DC70, v47);
  v48 = qword_384F068;
  v49 = qword_384F070;
  v50 = qword_384F8B0;
  v51 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 7;
  v52 = sub_C3D70(a1, v48, v51, &Py_NoneStruct, v49, v50);
  v53 = (_QWORD *)v52;
  if ( !v52 )
    goto LABEL_862;
  v54 = *(void **)(v52 + 8);
  if ( v54 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v54, &PyModule_Type) )
    v55 = sub_C3E00(a1, v53, qword_390DC10, qword_384F078, qword_384F8B0);
  else
    v55 = sub_B0340(a1, v53, qword_384F078);
  v29 = (*v53)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v53[1] + 48LL))(v53);
  if ( !v55 )
  {
LABEL_862:
    v783 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 7;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v783;
    v784 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v784;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384F078, v55);
  v56 = qword_384F048;
  v57 = qword_384F080;
  v58 = qword_384F8B0;
  v59 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 8;
  v60 = sub_C3D70(a1, v56, v59, &Py_NoneStruct, v57, v58);
  v61 = (_QWORD *)v60;
  if ( !v60 )
  {
    v785 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 8;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v785;
    v786 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v786;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v62 = *(void **)(v60 + 8);
  if ( v62 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v62, &PyModule_Type) )
    v63 = sub_C3E00(a1, v61, qword_390DC10, qword_384E0F8, qword_384F8B0);
  else
    v63 = sub_B0340(a1, v61, qword_384E0F8);
  if ( !v63
    || ((sub_D6010(qword_390DC10, qword_384E0F8, v63), v64 = (void *)v61[1], v64 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v64, &PyModule_Type)
      ? (v65 = sub_B0340(a1, v61, qword_384E100))
      : (v65 = sub_C3E00(a1, v61, qword_390DC10, qword_384E100, qword_384F8B0)),
        !v65) )
  {
    v775 = a1[11];
    v776 = a1[12];
    a1[11] = 0LL;
    v758 = (_QWORD *)a1[13];
    a1[12] = 0LL;
    a1[13] = 0LL;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v61)-- == 1LL;
    if ( v29 )
      (*(void (__fastcall **)(_QWORD *))(v61[1] + 48LL))(v61);
    v1548.m128i_i64[0] = v775;
    v760 = 8;
    v1548.m128i_i64[1] = v776;
    v1549 = v758;
LABEL_838:
    if ( v758 )
    {
LABEL_839:
      if ( v758[3] == v12 )
      {
LABEL_844:
        v769 = a1[3];
        a1[3] = *(_QWORD *)(v769 + 24);
        v29 = (*(_QWORD *)v769)-- == 1LL;
        *(_QWORD *)(v769 + 24) = 0LL;
        *(_BYTE *)(v769 + 116) = 0;
        if ( v29 )
          (*(void (**)(void))(*(_QWORD *)(v769 + 8) + 48LL))();
        sub_C5D00(a1, v1548.m128i_i64[0], v1548.m128i_i64[1], v1549);
        return 0LL;
      }
      v768 = sub_CC260(v12, v760);
      v764 = v1549;
      *(_QWORD *)(v768 + 16) = v758;
      v765 = v768;
      ++*v758;
      if ( v764 )
        goto LABEL_841;
      goto LABEL_843;
    }
LABEL_831:
    v763 = sub_CC260(v12, v760);
    v764 = v1549;
    v765 = v763;
    if ( v1549 )
    {
LABEL_841:
      v29 = (*v764)-- == 1LL;
      if ( v29 )
        (*(void (**)(void))(v764[1] + 48LL))();
    }
LABEL_843:
    v1549 = (_QWORD *)v765;
    goto LABEL_844;
  }
  sub_D6010(qword_390DC10, qword_384E100, v65);
  v29 = (*v61)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v61[1] + 48LL))(v61);
  v66 = (_QWORD *)sub_C7570();
  v67 = (void *)v66[1];
  ++*v66;
  v68 = v66;
  if ( v67 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v67, &PyModule_Type) )
    v69 = sub_C3E00(a1, v68, qword_390DC10, qword_384F088, qword_384F8B0);
  else
    v69 = sub_B0340(a1, v68, qword_384F088);
  if ( !v69 )
    goto LABEL_849;
  sub_D6010(qword_390DC10, qword_384F088, v69);
  v70 = (void *)v68[1];
  if ( v70 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v70, &PyModule_Type) )
    v71 = sub_C3E00(a1, v68, qword_390DC10, qword_384F090, qword_384F8B0);
  else
    v71 = sub_B0340(a1, v68, qword_384F090);
  if ( !v71 )
    goto LABEL_849;
  sub_D6010(qword_390DC10, qword_384F090, v71);
  v72 = (void *)v68[1];
  if ( v72 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v72, &PyModule_Type) )
    v73 = sub_C3E00(a1, v68, qword_390DC10, qword_384F098, qword_384F8B0);
  else
    v73 = sub_B0340(a1, v68, qword_384F098);
  if ( !v73
    || ((sub_D6010(qword_390DC10, qword_384F098, v73), v74 = (void *)v68[1], v74 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v74, &PyModule_Type)
      ? (v75 = sub_B0340(a1, v68, qword_384F0A0))
      : (v75 = sub_C3E00(a1, v68, qword_390DC10, qword_384F0A0, qword_384F8B0)),
        !v75
     || ((sub_D6010(qword_390DC10, qword_384F0A0, v75), v76 = (void *)v68[1], v76 != &PyModule_Type)
      && !(unsigned int)PyType_IsSubtype(v76, &PyModule_Type)
       ? (v77 = sub_B0340(a1, v68, qword_384F0A8))
       : (v77 = sub_C3E00(a1, v68, qword_390DC10, qword_384F0A8, qword_384F8B0)),
         !v77)) )
  {
LABEL_849:
    v773 = a1[11];
    v774 = a1[12];
    a1[11] = 0LL;
    v758 = (_QWORD *)a1[13];
    a1[12] = 0LL;
    a1[13] = 0LL;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v68)-- == 1LL;
    if ( v29 )
      (*(void (__fastcall **)(_QWORD *))(v68[1] + 48LL))(v68);
    v1548.m128i_i64[0] = v773;
    v760 = 9;
    v1548.m128i_i64[1] = v774;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384F0A8, v77);
  v29 = (*v68)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v68[1] + 48LL))(v68);
  v78 = qword_384F0B0;
  v79 = qword_384F0B8;
  v80 = qword_384F8B0;
  v81 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 10;
  v82 = sub_C3D70(a1, v78, v81, &Py_NoneStruct, v79, v80);
  v83 = (_QWORD *)v82;
  if ( !v82 )
  {
    v791 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 10;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v791;
    v792 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v792;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v84 = *(void **)(v82 + 8);
  if ( v84 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v84, &PyModule_Type) )
    v85 = sub_C3E00(a1, v83, qword_390DC10, qword_384F0C0, qword_384F8B0);
  else
    v85 = sub_B0340(a1, v83, qword_384F0C0);
  if ( !v85
    || ((sub_D6010(qword_390DC10, qword_384F0C0, v85), v86 = (void *)v83[1], v86 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v86, &PyModule_Type)
      ? (v87 = sub_B0340(a1, v83, qword_384DE20))
      : (v87 = sub_C3E00(a1, v83, qword_390DC10, qword_384DE20, qword_384F8B0)),
        !v87) )
  {
    v787 = a1[11];
    v788 = a1[12];
    a1[11] = 0LL;
    v758 = (_QWORD *)a1[13];
    a1[12] = 0LL;
    a1[13] = 0LL;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v83)-- == 1LL;
    if ( v29 )
      (*(void (__fastcall **)(_QWORD *))(v83[1] + 48LL))(v83);
    v1548.m128i_i64[0] = v787;
    v760 = 10;
    v1548.m128i_i64[1] = v788;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384DE20, v87);
  v29 = (*v83)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v83[1] + 48LL))(v83);
  v88 = qword_384F0C8;
  v89 = qword_384F0D0;
  v90 = qword_384F8B0;
  v91 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 12;
  v92 = sub_C3D70(a1, v88, v91, &Py_NoneStruct, v89, v90);
  v93 = (_QWORD *)v92;
  if ( !v92 )
  {
    v799 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 12;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v799;
    v800 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v800;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v94 = *(void **)(v92 + 8);
  if ( v94 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v94, &PyModule_Type) )
    v95 = sub_C3E00(a1, v93, qword_390DC10, qword_384EB88, qword_384F8B0);
  else
    v95 = sub_B0340(a1, v93, qword_384EB88);
  if ( !v95
    || ((sub_D6010(qword_390DC10, qword_384EB88, v95), v96 = (void *)v93[1], v96 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v96, &PyModule_Type)
      ? (v97 = sub_B0340(a1, v93, qword_384D840))
      : (v97 = sub_C3E00(a1, v93, qword_390DC10, qword_384D840, qword_384F8B0)),
        !v97) )
  {
    v789 = a1[11];
    v790 = a1[12];
    a1[11] = 0LL;
    v758 = (_QWORD *)a1[13];
    a1[12] = 0LL;
    a1[13] = 0LL;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v93)-- == 1LL;
    if ( v29 )
      (*(void (__fastcall **)(_QWORD *))(v93[1] + 48LL))(v93);
    v1548.m128i_i64[0] = v789;
    v760 = 12;
    v1548.m128i_i64[1] = v790;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384D840, v97);
  v29 = (*v93)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v93[1] + 48LL))(v93);
  v98 = qword_384F0D8;
  v99 = qword_384F0E0;
  v100 = qword_384F8B0;
  v101 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 13;
  v102 = sub_C3D70(a1, v98, v101, &Py_NoneStruct, v99, v100);
  v103 = (_QWORD *)v102;
  if ( !v102 )
    goto LABEL_889;
  v104 = *(void **)(v102 + 8);
  if ( v104 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v104, &PyModule_Type) )
    v105 = sub_C3E00(a1, v103, qword_390DC10, qword_384F0E8, qword_384F8B0);
  else
    v105 = sub_B0340(a1, v103, qword_384F0E8);
  v29 = (*v103)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v103[1] + 48LL))(v103);
  if ( !v105 )
  {
LABEL_889:
    v797 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 13;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v797;
    v798 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v798;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384F0E8, v105);
  v106 = (_QWORD *)sub_C7690();
  ++*v106;
  v107 = v106;
  Object = PySys_GetObject("exit");
  sub_D60B0(qword_390DC10, qword_384F0F0, Object);
  v109 = (void *)v107[1];
  if ( v109 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v109, &PyModule_Type) )
    v110 = sub_C3E00(a1, v107, qword_390DC10, qword_384D640, qword_384F8B0);
  else
    v110 = sub_B0340(a1, v107, qword_384D640);
  if ( !v110 )
  {
    v793 = a1[11];
    v794 = a1[12];
    a1[11] = 0LL;
    v758 = (_QWORD *)a1[13];
    a1[12] = 0LL;
    a1[13] = 0LL;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v107)-- == 1LL;
    if ( v29 )
      (*(void (__fastcall **)(_QWORD *))(v107[1] + 48LL))(v107);
    v1548.m128i_i64[0] = v793;
    v760 = 14;
    v1548.m128i_i64[1] = v794;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384D640, v110);
  v29 = (*v107)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v107[1] + 48LL))(v107);
  v111 = qword_384EFC8;
  v112 = qword_384F0F8;
  v113 = qword_384F8B0;
  v114 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 15;
  v115 = sub_C3D70(a1, v111, v114, &Py_NoneStruct, v112, v113);
  v116 = (_QWORD *)v115;
  if ( !v115 )
  {
    v806 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 15;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v806;
    v807 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v807;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v117 = *(void **)(v115 + 8);
  if ( v117 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v117, &PyModule_Type) )
    v118 = sub_C3E00(a1, v116, qword_390DC10, qword_384EFC8, qword_384F8B0);
  else
    v118 = sub_B0340(a1, v116, qword_384EFC8);
  if ( !v118
    || ((sub_D6010(qword_390DC10, qword_384EFC8, v118), v119 = (void *)v116[1], v119 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v119, &PyModule_Type)
      ? (v120 = sub_B0340(a1, v116, qword_384EFD0))
      : (v120 = sub_C3E00(a1, v116, qword_390DC10, qword_384EFD0, qword_384F8B0)),
        !v120) )
  {
    v795 = a1[11];
    v796 = a1[12];
    a1[11] = 0LL;
    v758 = (_QWORD *)a1[13];
    a1[12] = 0LL;
    a1[13] = 0LL;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v116)-- == 1LL;
    if ( v29 )
      (*(void (__fastcall **)(_QWORD *))(v116[1] + 48LL))(v116);
    v1548.m128i_i64[0] = v795;
    v760 = 15;
    v1548.m128i_i64[1] = v796;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384EFD0, v120);
  v29 = (*v116)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v116[1] + 48LL))(v116);
  v121 = qword_384F100;
  v122 = qword_384F108;
  v123 = qword_384F8B0;
  v124 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 16;
  v125 = sub_C3D70(a1, v121, v124, &Py_NoneStruct, v122, v123);
  v126 = (_QWORD *)v125;
  if ( !v125 )
    goto LABEL_900;
  v127 = *(void **)(v125 + 8);
  if ( v127 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v127, &PyModule_Type) )
    v128 = sub_C3E00(a1, v126, qword_390DC10, qword_384EB48, qword_384F8B0);
  else
    v128 = sub_B0340(a1, v126, qword_384EB48);
  v29 = (*v126)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v126[1] + 48LL))(v126);
  if ( !v128 )
  {
LABEL_900:
    v808 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 16;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v808;
    v809 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v809;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384EB48, v128);
  v129 = qword_384ED48;
  v130 = qword_384F110;
  v131 = qword_384F8B0;
  v132 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 17;
  v133 = sub_C3D70(a1, v129, v132, &Py_NoneStruct, v130, v131);
  v134 = (_QWORD *)v133;
  if ( !v133 )
  {
    v810 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 17;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v810;
    v811 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v811;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v135 = *(void **)(v133 + 8);
  if ( v135 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v135, &PyModule_Type) )
    v136 = sub_C3E00(a1, v134, qword_390DC10, qword_384ED50, qword_384F8B0);
  else
    v136 = sub_B0340(a1, v134, qword_384ED50);
  if ( !v136
    || ((sub_D6010(qword_390DC10, qword_384ED50, v136), v137 = (void *)v134[1], v137 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v137, &PyModule_Type)
      ? (v138 = sub_B0340(a1, v134, qword_384DE28))
      : (v138 = sub_C3E00(a1, v134, qword_390DC10, qword_384DE28, qword_384F8B0)),
        !v138
     || ((sub_D6010(qword_390DC10, qword_384DE28, v138), v139 = (void *)v134[1], v139 != &PyModule_Type)
      && !(unsigned int)PyType_IsSubtype(v139, &PyModule_Type)
       ? (v140 = sub_B0340(a1, v134, qword_384EB40))
       : (v140 = sub_C3E00(a1, v134, qword_390DC10, qword_384EB40, qword_384F8B0)),
         !v140)) )
  {
    v801 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v801;
    v802 = a1[12];
    v803 = v1548.m128i_i64[0];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v802;
    v804 = (_QWORD *)a1[13];
    v805 = v1548.m128i_i64[1];
    a1[13] = 0LL;
    v758 = v804;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v134)-- == 1LL;
    if ( v29 )
      (*(void (__fastcall **)(_QWORD *))(v134[1] + 48LL))(v134);
    v1548.m128i_i64[0] = v803;
    v760 = 17;
    v1548.m128i_i64[1] = v805;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384EB40, v140);
  v29 = (*v134)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v134[1] + 48LL))(v134);
  v141 = qword_384F118;
  v142 = qword_384F120;
  v143 = qword_384F8B0;
  v144 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 18;
  v145 = sub_C3D70(a1, v141, v144, &Py_NoneStruct, v142, v143);
  v146 = (_QWORD *)v145;
  if ( !v145 )
    goto LABEL_910;
  v147 = *(void **)(v145 + 8);
  if ( v147 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v147, &PyModule_Type) )
    v148 = sub_C3E00(a1, v146, qword_390DC10, qword_384E4D0, qword_384F8B0);
  else
    v148 = sub_B0340(a1, v146, qword_384E4D0);
  v29 = (*v146)-- == 1LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(v146[1] + 48LL))(v146);
  if ( !v148 )
  {
LABEL_910:
    v817 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 18;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v817;
    v818 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v818;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384E4D0, v148);
  v149 = qword_384F128;
  v150 = qword_384F130;
  v151 = qword_384F8B0;
  v152 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 19;
  v153 = sub_C3D70(a1, v149, v152, &Py_NoneStruct, v150, v151);
  v154 = (_QWORD *)v153;
  if ( !v153 )
    goto LABEL_915;
  v155 = *(void **)(v153 + 8);
  if ( v155 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v155, &PyModule_Type) )
    v156 = sub_C3E00(a1, v154, qword_390DC10, qword_384F138, qword_384F8B0);
  else
    v156 = sub_B0340(a1, v154, qword_384F138);
  v29 = (*v154)-- == 1LL;
  if ( v29 )
    sub_95CC0(v154);
  if ( !v156 )
  {
LABEL_915:
    v821 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 19;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v821;
    v822 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v822;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384F138, v156);
  v157 = qword_384F140;
  v158 = qword_384F148;
  v159 = qword_384F8B0;
  v160 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 20;
  v161 = sub_C3D70(a1, v157, v160, &Py_NoneStruct, v158, v159);
  v162 = (_QWORD *)v161;
  if ( !v161 )
    goto LABEL_913;
  v163 = *(void **)(v161 + 8);
  if ( v163 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v163, &PyModule_Type) )
    v164 = sub_C3E00(a1, v162, qword_390DC10, qword_384EAF0, qword_384F8B0);
  else
    v164 = sub_B0340(a1, v162, qword_384EAF0);
  v29 = (*v162)-- == 1LL;
  if ( v29 )
    sub_95CC0(v162);
  if ( !v164 )
  {
LABEL_913:
    v819 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 20;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v819;
    v820 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v820;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384EAF0, v164);
  v165 = qword_384F150;
  v166 = qword_384F158;
  v167 = qword_384F8B0;
  v168 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 21;
  v169 = sub_C3D70(a1, v165, v168, &Py_NoneStruct, v166, v167);
  v170 = (_QWORD *)v169;
  if ( !v169 )
  {
    v830 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 21;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v830;
    v831 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v831;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v171 = *(void **)(v169 + 8);
  if ( v171 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v171, &PyModule_Type) )
    v172 = sub_C3E00(a1, v170, qword_390DC10, qword_384EE98, qword_384F8B0);
  else
    v172 = sub_B0340(a1, v170, qword_384EE98);
  if ( !v172
    || ((sub_D6010(qword_390DC10, qword_384EE98, v172), v173 = (void *)v170[1], v173 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v173, &PyModule_Type)
      ? (v174 = sub_B0340(a1, v170, qword_384D8A0))
      : (v174 = sub_C3E00(a1, v170, qword_390DC10, qword_384D8A0, qword_384F8B0)),
        !v174) )
  {
    v812 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v812;
    v813 = a1[12];
    v814 = v1548.m128i_i64[0];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v813;
    v815 = (_QWORD *)a1[13];
    v816 = v1548.m128i_i64[1];
    a1[13] = 0LL;
    v758 = v815;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v170)-- == 1LL;
    if ( v29 )
      sub_95CC0(v170);
    v1548.m128i_i64[0] = v814;
    v760 = 21;
    v1548.m128i_i64[1] = v816;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384D8A0, v174);
  v29 = (*v170)-- == 1LL;
  if ( v29 )
    sub_95CC0(v170);
  v175 = (_QWORD *)sub_C77B0();
  ++*v175;
  v176 = v175;
  v177 = sub_C76F0();
  sub_D60B0(qword_390DC10, qword_384F160, v177);
  v178 = (void *)v176[1];
  if ( v178 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v178, &PyModule_Type) )
    v179 = sub_C3E00(a1, v176, qword_390DC10, qword_384D890, qword_384F8B0);
  else
    v179 = sub_B0340(a1, v176, qword_384D890);
  if ( !v179 )
  {
    v823 = a1[11];
    v824 = a1[12];
    a1[11] = 0LL;
    v758 = (_QWORD *)a1[13];
    a1[12] = 0LL;
    a1[13] = 0LL;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v176)-- == 1LL;
    if ( v29 )
      sub_95CC0(v176);
    v1548.m128i_i64[0] = v823;
    v760 = 22;
    v1548.m128i_i64[1] = v824;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384D890, v179);
  v29 = (*v176)-- == 1LL;
  if ( v29 )
    sub_95CC0(v176);
  v180 = sub_C8870();
  v181 = sub_B00D0(a1, v180, qword_384EDB0);
  sub_D6010(qword_390DC10, qword_384EDB0, v181);
  v182 = qword_384F168;
  v183 = qword_384F170;
  v184 = qword_384F8B0;
  v185 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 24;
  v186 = sub_C3D70(a1, v182, v185, &Py_NoneStruct, v183, v184);
  v187 = (_QWORD *)v186;
  if ( !v186 )
  {
    v837 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 24;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v837;
    v838 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v838;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v188 = *(void **)(v186 + 8);
  if ( v188 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v188, &PyModule_Type) )
    v189 = sub_C3E00(a1, v187, qword_390DC10, qword_384E0B0, qword_384F8B0);
  else
    v189 = sub_B0340(a1, v187, qword_384E0B0);
  if ( !v189
    || ((sub_D6010(qword_390DC10, qword_384E0B0, v189), v190 = (void *)v187[1], v190 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v190, &PyModule_Type)
      ? (v191 = sub_B0340(a1, v187, qword_384EC50))
      : (v191 = sub_C3E00(a1, v187, qword_390DC10, qword_384EC50, qword_384F8B0)),
        !v191) )
  {
    v825 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v825;
    v826 = a1[12];
    v827 = v1548.m128i_i64[0];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v826;
    v828 = (_QWORD *)a1[13];
    v829 = v1548.m128i_i64[1];
    a1[13] = 0LL;
    v758 = v828;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v187)-- == 1LL;
    if ( v29 )
      sub_95CC0(v187);
    v1548.m128i_i64[0] = v827;
    v760 = 24;
    v1548.m128i_i64[1] = v829;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384EC50, v191);
  v29 = (*v187)-- == 1LL;
  if ( v29 )
    sub_95CC0(v187);
  v192 = qword_384F178;
  v193 = qword_384F180;
  v194 = qword_384F8B0;
  v195 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 25;
  v196 = sub_C3D70(a1, v192, v195, &Py_NoneStruct, v193, v194);
  v197 = (_QWORD *)v196;
  if ( !v196 )
  {
    v842 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 25;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v842;
    v843 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v843;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v198 = *(void **)(v196 + 8);
  if ( v198 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v198, &PyModule_Type) )
    v199 = sub_C3E00(a1, v197, qword_390DC10, qword_384E3D8, qword_384F8B0);
  else
    v199 = sub_B0340(a1, v197, qword_384E3D8);
  if ( !v199
    || ((sub_D6010(qword_390DC10, qword_384E3D8, v199), v200 = (void *)v197[1], v200 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v200, &PyModule_Type)
      ? (v201 = sub_B0340(a1, v197, qword_384E420))
      : (v201 = sub_C3E00(a1, v197, qword_390DC10, qword_384E420, qword_384F8B0)),
        !v201) )
  {
    v832 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v832;
    v833 = a1[12];
    v834 = v1548.m128i_i64[0];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v833;
    v835 = (_QWORD *)a1[13];
    v836 = v1548.m128i_i64[1];
    a1[13] = 0LL;
    v758 = v835;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v197)-- == 1LL;
    if ( v29 )
      sub_95CC0(v197);
    v1548.m128i_i64[0] = v834;
    v760 = 25;
    v1548.m128i_i64[1] = v836;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384E420, v201);
  v29 = (*v197)-- == 1LL;
  if ( v29 )
    sub_95CC0(v197);
  v202 = qword_384F188;
  v203 = qword_384F190;
  v204 = qword_384F8B0;
  v205 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 26;
  v206 = sub_C3D70(a1, v202, v205, &Py_NoneStruct, v203, v204);
  v207 = (_QWORD *)v206;
  if ( !v206 )
  {
    v844 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 26;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v844;
    v845 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v845;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v208 = *(void **)(v206 + 8);
  if ( v208 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v208, &PyModule_Type) )
    v209 = sub_C3E00(a1, v207, qword_390DC10, qword_384D808, qword_384F8B0);
  else
    v209 = sub_B0340(a1, v207, qword_384D808);
  if ( !v209
    || ((sub_D6010(qword_390DC10, qword_384D808, v209), v210 = (void *)v207[1], v210 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v210, &PyModule_Type)
      ? (v211 = sub_B0340(a1, v207, qword_384EC00))
      : (v211 = sub_C3E00(a1, v207, qword_390DC10, qword_384EC00, qword_384F8B0)),
        !v211) )
  {
    v1025 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1025;
    v1026 = a1[12];
    v1027 = v1548.m128i_i64[0];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1026;
    v1028 = (_QWORD *)a1[13];
    v1029 = v1548.m128i_i64[1];
    a1[13] = 0LL;
    v758 = v1028;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v207)-- == 1LL;
    if ( v29 )
      sub_95CC0(v207);
    v1548.m128i_i64[0] = v1027;
    v760 = 26;
    v1548.m128i_i64[1] = v1029;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384EC00, v211);
  v29 = (*v207)-- == 1LL;
  if ( v29 )
    sub_95CC0(v207);
  v212 = qword_384F028;
  v213 = qword_384F198;
  v214 = qword_384F8B0;
  v215 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 27;
  v216 = sub_C3D70(a1, v212, v215, &Py_NoneStruct, v213, v214);
  v217 = (_QWORD *)v216;
  if ( !v216 )
  {
    v1030 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 27;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1030;
    v1031 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1031;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v218 = *(void **)(v216 + 8);
  if ( v218 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v218, &PyModule_Type) )
    v219 = sub_C3E00(a1, v217, qword_390DC10, qword_384D998, qword_384F8B0);
  else
    v219 = sub_B0340(a1, v217, qword_384D998);
  if ( !v219
    || ((sub_D6010(qword_390DC10, qword_384D998, v219), v220 = (void *)v217[1], v220 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v220, &PyModule_Type)
      ? (v221 = sub_B0340(a1, v217, qword_384D990))
      : (v221 = sub_C3E00(a1, v217, qword_390DC10, qword_384D990, qword_384F8B0)),
        !v221) )
  {
    v1032 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1032;
    v1033 = a1[12];
    v1034 = v1548.m128i_i64[0];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1033;
    v1035 = (_QWORD *)a1[13];
    v1036 = v1548.m128i_i64[1];
    a1[13] = 0LL;
    v758 = v1035;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v217)-- == 1LL;
    if ( v29 )
      sub_95CC0(v217);
    v1548.m128i_i64[0] = v1034;
    v760 = 27;
    v1548.m128i_i64[1] = v1036;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384D990, v221);
  v29 = (*v217)-- == 1LL;
  if ( v29 )
    sub_95CC0(v217);
  v222 = qword_384F1A0;
  v223 = qword_384F1A8;
  v224 = qword_384F8B0;
  v225 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 28;
  v226 = sub_C3D70(a1, v222, v225, &Py_NoneStruct, v223, v224);
  v227 = (_QWORD *)v226;
  if ( !v226 )
    goto LABEL_1086;
  v228 = *(void **)(v226 + 8);
  if ( v228 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v228, &PyModule_Type) )
    v229 = sub_C3E00(a1, v227, qword_390DC10, qword_384D660, qword_384F8B0);
  else
    v229 = sub_B0340(a1, v227, qword_384D660);
  v29 = (*v227)-- == 1LL;
  if ( v29 )
    sub_95CC0(v227);
  if ( !v229 )
  {
LABEL_1086:
    v1023 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 28;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1023;
    v1024 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1024;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384D660, v229);
  v230 = qword_384F1B0;
  v231 = qword_384F1B8;
  v232 = qword_384F8B0;
  v233 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 29;
  v234 = sub_C3D70(a1, v230, v233, &Py_NoneStruct, v231, v232);
  v235 = (_QWORD *)v234;
  if ( !v234 )
    goto LABEL_1083;
  v236 = *(void **)(v234 + 8);
  if ( v236 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v236, &PyModule_Type) )
    v237 = sub_C3E00(a1, v235, qword_390DC10, qword_384D7A8, qword_384F8B0);
  else
    v237 = sub_B0340(a1, v235, qword_384D7A8);
  v29 = (*v235)-- == 1LL;
  if ( v29 )
    sub_95CC0(v235);
  if ( !v237 )
  {
LABEL_1083:
    v1021 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 29;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1021;
    v1022 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1022;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384D7A8, v237);
  v238 = qword_384F1C0;
  v239 = qword_384F1C8;
  v240 = qword_384F8B0;
  v241 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 30;
  v242 = sub_C3D70(a1, v238, v241, &Py_NoneStruct, v239, v240);
  v243 = (_QWORD *)v242;
  if ( !v242 )
    goto LABEL_1080;
  v244 = *(void **)(v242 + 8);
  if ( v244 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v244, &PyModule_Type) )
    v245 = sub_C3E00(a1, v243, qword_390DC10, qword_384D7D8, qword_384F8B0);
  else
    v245 = sub_B0340(a1, v243, qword_384D7D8);
  v29 = (*v243)-- == 1LL;
  if ( v29 )
    sub_95CC0(v243);
  if ( !v245 )
  {
LABEL_1080:
    v1019 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 30;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1019;
    v1020 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1020;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384D7D8, v245);
  v246 = qword_384F1D0;
  v247 = qword_384F1D8;
  v248 = qword_384F8B0;
  v249 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 31;
  v250 = sub_C3D70(a1, v246, v249, &Py_NoneStruct, v247, v248);
  v251 = (_QWORD *)v250;
  if ( !v250 )
    goto LABEL_1079;
  v252 = *(void **)(v250 + 8);
  if ( v252 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v252, &PyModule_Type) )
    v253 = sub_C3E00(a1, v251, qword_390DC10, qword_384D788, qword_384F8B0);
  else
    v253 = sub_B0340(a1, v251, qword_384D788);
  v29 = (*v251)-- == 1LL;
  if ( v29 )
    sub_95CC0(v251);
  if ( !v253 )
  {
LABEL_1079:
    v1017 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 31;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1017;
    v1018 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1018;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384D788, v253);
  v254 = qword_384F1E0;
  v255 = qword_384F1E8;
  v256 = qword_384F8B0;
  v257 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 32;
  v258 = sub_C3D70(a1, v254, v257, &Py_NoneStruct, v255, v256);
  v259 = (_QWORD *)v258;
  if ( !v258 )
  {
    v1037 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 32;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1037;
    v1038 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1038;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v260 = *(void **)(v258 + 8);
  if ( v260 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v260, &PyModule_Type) )
    v261 = sub_C3E00(a1, v259, qword_390DC10, qword_384EEA8, qword_384F8B0);
  else
    v261 = sub_B0340(a1, v259, qword_384EEA8);
  if ( !v261
    || ((sub_D6010(qword_390DC10, qword_384EEA8, v261), v262 = (void *)v259[1], v262 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v262, &PyModule_Type)
      ? (v263 = sub_B0340(a1, v259, qword_384EEB0))
      : (v263 = sub_C3E00(a1, v259, qword_390DC10, qword_384EEB0, qword_384F8B0)),
        !v263) )
  {
    v1039 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1039;
    v1040 = a1[12];
    v1041 = v1548.m128i_i64[0];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1040;
    v1042 = (_QWORD *)a1[13];
    v1043 = v1548.m128i_i64[1];
    a1[13] = 0LL;
    v758 = v1042;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v259)-- == 1LL;
    if ( v29 )
      sub_95CC0(v259);
    v1548.m128i_i64[0] = v1041;
    v760 = 32;
    v1548.m128i_i64[1] = v1043;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384EEB0, v263);
  v29 = (*v259)-- == 1LL;
  if ( v29 )
    sub_95CC0(v259);
  v264 = qword_384F1F0;
  v265 = qword_384F1F8;
  v266 = qword_384F8B0;
  v267 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 33;
  v268 = sub_C3D70(a1, v264, v267, &Py_NoneStruct, v265, v266);
  v269 = (_QWORD *)v268;
  if ( !v268 )
  {
    v1044 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 33;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1044;
    v1045 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1045;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v270 = *(void **)(v268 + 8);
  if ( v270 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v270, &PyModule_Type) )
    v271 = sub_C3E00(a1, v269, qword_390DC10, qword_384D628, qword_384F8B0);
  else
    v271 = sub_B0340(a1, v269, qword_384D628);
  if ( !v271
    || ((sub_D6010(qword_390DC10, qword_384D628, v271), v272 = (void *)v269[1], v272 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v272, &PyModule_Type)
      ? (v273 = sub_B0340(a1, v269, qword_384D648))
      : (v273 = sub_C3E00(a1, v269, qword_390DC10, qword_384D648, qword_384F8B0)),
        !v273) )
  {
    v1046 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1046;
    v1047 = a1[12];
    v1048 = v1548.m128i_i64[0];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1047;
    v1049 = (_QWORD *)a1[13];
    v1050 = v1548.m128i_i64[1];
    a1[13] = 0LL;
    v758 = v1049;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v269)-- == 1LL;
    if ( v29 )
      sub_95CC0(v269);
    v1548.m128i_i64[0] = v1048;
    v760 = 33;
    v1548.m128i_i64[1] = v1050;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384D648, v273);
  v29 = (*v269)-- == 1LL;
  if ( v29 )
    sub_95CC0(v269);
  v274 = qword_384F200;
  v275 = qword_384F208;
  v276 = qword_384F8B0;
  v277 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 34;
  v278 = sub_C3D70(a1, v274, v277, &Py_NoneStruct, v275, v276);
  v279 = (_QWORD *)v278;
  if ( !v278 )
  {
    v1051 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 34;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1051;
    v1052 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1052;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v280 = *(void **)(v278 + 8);
  if ( v280 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v280, &PyModule_Type) )
    v281 = sub_C3E00(a1, v279, qword_390DC10, qword_384E338, qword_384F8B0);
  else
    v281 = sub_B0340(a1, v279, qword_384E338);
  if ( !v281
    || ((sub_D6010(qword_390DC10, qword_384E338, v281), v282 = (void *)v279[1], v282 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v282, &PyModule_Type)
      ? (v283 = sub_B0340(a1, v279, qword_384E260))
      : (v283 = sub_C3E00(a1, v279, qword_390DC10, qword_384E260, qword_384F8B0)),
        !v283) )
  {
    v1053 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1053;
    v1054 = a1[12];
    v1055 = v1548.m128i_i64[0];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1054;
    v1056 = (_QWORD *)a1[13];
    v1057 = v1548.m128i_i64[1];
    a1[13] = 0LL;
    v758 = v1056;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v279)-- == 1LL;
    if ( v29 )
      sub_95CC0(v279);
    v1548.m128i_i64[0] = v1055;
    v760 = 34;
    v1548.m128i_i64[1] = v1057;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384E260, v283);
  v29 = (*v279)-- == 1LL;
  if ( v29 )
    sub_95CC0(v279);
  v284 = qword_384F210;
  v285 = qword_384F218;
  v286 = qword_384F8B0;
  v287 = qword_390DC10;
  *(_DWORD *)(v12 + 108) = 35;
  v288 = sub_C3D70(a1, v284, v287, &Py_NoneStruct, v285, v286);
  v289 = (_QWORD *)v288;
  if ( !v288 )
  {
    v1058 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 35;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1058;
    v1059 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1059;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v290 = *(void **)(v288 + 8);
  if ( v290 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v290, &PyModule_Type) )
    v291 = sub_C3E00(a1, v289, qword_390DC10, qword_384F220, qword_384F8B0);
  else
    v291 = sub_B0340(a1, v289, qword_384F220);
  if ( !v291 )
    goto LABEL_1140;
  sub_D6010(qword_390DC10, qword_384F220, v291);
  v292 = (void *)v289[1];
  if ( v292 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v292, &PyModule_Type) )
    v293 = sub_C3E00(a1, v289, qword_390DC10, qword_384EE48, qword_384F8B0);
  else
    v293 = sub_B0340(a1, v289, qword_384EE48);
  if ( !v293 )
    goto LABEL_1140;
  sub_D6010(qword_390DC10, qword_384EE48, v293);
  v294 = (void *)v289[1];
  if ( v294 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v294, &PyModule_Type) )
    v295 = sub_C3E00(a1, v289, qword_390DC10, qword_384EF80, qword_384F8B0);
  else
    v295 = sub_B0340(a1, v289, qword_384EF80);
  if ( !v295 )
    goto LABEL_1140;
  sub_D6010(qword_390DC10, qword_384EF80, v295);
  v296 = (void *)v289[1];
  if ( v296 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v296, &PyModule_Type) )
    v297 = sub_C3E00(a1, v289, qword_390DC10, qword_384EFF0, qword_384F8B0);
  else
    v297 = sub_B0340(a1, v289, qword_384EFF0);
  if ( !v297 )
    goto LABEL_1140;
  sub_D6010(qword_390DC10, qword_384EFF0, v297);
  v298 = (void *)v289[1];
  if ( v298 == &PyModule_Type || (unsigned int)PyType_IsSubtype(v298, &PyModule_Type) )
    v299 = sub_C3E00(a1, v289, qword_390DC10, qword_384EF60, qword_384F8B0);
  else
    v299 = sub_B0340(a1, v289, qword_384EF60);
  if ( !v299
    || ((sub_D6010(qword_390DC10, qword_384EF60, v299), v300 = (void *)v289[1], v300 != &PyModule_Type)
     && !(unsigned int)PyType_IsSubtype(v300, &PyModule_Type)
      ? (v301 = sub_B0340(a1, v289, qword_384D968))
      : (v301 = sub_C3E00(a1, v289, qword_390DC10, qword_384D968, qword_384F8B0)),
        !v301
     || ((sub_D6010(qword_390DC10, qword_384D968, v301), v302 = (void *)v289[1], v302 != &PyModule_Type)
      && !(unsigned int)PyType_IsSubtype(v302, &PyModule_Type)
       ? (v303 = sub_B0340(a1, v289, qword_384F228))
       : (v303 = sub_C3E00(a1, v289, qword_390DC10, qword_384F228, qword_384F8B0)),
         !v303)) )
  {
LABEL_1140:
    v1074 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1074;
    v1075 = a1[12];
    v1076 = v1548.m128i_i64[0];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1075;
    v1077 = (_QWORD *)a1[13];
    v1078 = v1548.m128i_i64[1];
    a1[13] = 0LL;
    v758 = v1077;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v289)-- == 1LL;
    if ( v29 )
      sub_95CC0(v289);
    v1548.m128i_i64[0] = v1076;
    v760 = 35;
    v1548.m128i_i64[1] = v1078;
    v1549 = v758;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384F228, v303);
  v29 = (*v289)-- == 1LL;
  if ( v29 )
    sub_95CC0(v289);
  v304 = sub_C7690();
  sub_D60B0(qword_390DC10, qword_384F230, v304);
  v305 = qword_384F140;
  v306 = qword_384F8B0;
  *(_DWORD *)(v12 + 108) = 38;
  v307 = sub_C3D70(a1, v305, qword_390DC10, &Py_NoneStruct, &Py_NoneStruct, v306);
  if ( !v307 )
  {
    v1072 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 38;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1072;
    v1073 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1073;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384F140, v307);
  v308 = sub_C2AC0(0, qword_384F238, 0, qword_390DF60, 0, 0, 0LL, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384F238, v308);
  v309 = (_QWORD *)sub_C4A20(qword_390DC10, *(_QWORD *)&qword_384F238);
  if ( !v309 || (v310 = (_QWORD *)*v309) == 0LL )
  {
    v1071 = (_QWORD *)sub_C4A20(qword_384F848, *(_QWORD *)&qword_384F238);
    v310 = v1071;
    if ( v1071 )
      v310 = (_QWORD *)*v1071;
  }
  v311 = (_QWORD *)sub_C4A20(qword_390DC10, qword_384F140);
  if ( !v311 || (v312 = (_QWORD *)*v311) == 0LL )
  {
    v1070 = (_QWORD *)sub_C4A20(qword_384F848, qword_384F140);
    v312 = v1070;
    if ( v1070 )
      v312 = (_QWORD *)*v1070;
  }
  if ( !(unsigned __int8)sub_AB460(a1, v312, qword_384F240, v310) )
  {
    v1068 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 45;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1068;
    v1069 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1069;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v313 = (_QWORD *)sub_C2AC0(0, qword_384DD88, 0, qword_390DF68, 0, 0, 0LL, qword_390DC08, 0LL, 0LL, 0LL);
  v314 = sub_C7690();
  v315 = sub_AB460(a1, v314, qword_384F240, v313);
  v29 = (*v313)-- == 1LL;
  v316 = v315;
  if ( v29 )
    sub_95CC0(v313);
  if ( !v316 )
  {
    v1066 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 46;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1066;
    v1067 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1067;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v317 = (__int64 *)sub_C4A20(qword_390DC10, qword_384F138);
  if ( !v317 || (v318 = *v317) == 0 )
  {
    v1065 = (__int64 *)sub_C4A20(qword_384F848, qword_384F138);
    if ( !v1065 || (v318 = *v1065) == 0 )
    {
      v760 = 48;
      sub_C5700(a1, &v1548, qword_384F138);
      v758 = v1549;
      goto LABEL_838;
    }
  }
  v319 = *(_QWORD *)&qword_384D668;
  v320 = qword_384F248;
  *(_DWORD *)(v12 + 108) = 48;
  v321 = sub_B7100(a1, v318, v319 + 24, v320);
  if ( !v321 )
  {
    v1063 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 48;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1063;
    v1064 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1064;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384E510, v321);
  v322 = qword_384ECD8;
  v323 = sub_1C6C390();
  if ( !v323 )
  {
    v760 = 50;
    sub_C5700(a1, &v1548, qword_384F228);
    v758 = v1549;
    goto LABEL_838;
  }
  *(_DWORD *)(v12 + 108) = 50;
  v324 = (_QWORD *)sub_B1A80(a1, v323);
  if ( !v324 )
  {
    v1061 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 50;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1061;
    v1062 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1062;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v325 = (_QWORD *)PyDict_NewPresized(2LL);
  PyDict_SetItem(v325, v322, v324);
  v29 = (*v324)-- == 1LL;
  if ( v29 )
    sub_95CC0(v324);
  v326 = qword_384ED10;
  v327 = sub_1C6C390();
  if ( !v327 )
  {
    sub_C5700(a1, &v1548, qword_384F228);
    goto LABEL_1122;
  }
  *(_DWORD *)(v12 + 108) = 51;
  v328 = sub_B1A80(a1, v327);
  v329 = (_QWORD *)v328;
  if ( !v328 )
  {
    v1083 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1083;
    v1084 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1084;
    v1085 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1085;
LABEL_1122:
    v29 = (*v325)-- == 1LL;
    if ( v29 )
    {
      v1060 = v325;
      v760 = 51;
      sub_95CC0(v1060);
      v758 = v1549;
    }
    else
    {
      v758 = v1549;
      v760 = 51;
    }
    goto LABEL_838;
  }
  PyDict_SetItem(v325, v326, v328);
  v29 = (*v329)-- == 1LL;
  if ( v29 )
    sub_95CC0(v329);
  sub_D6010(qword_390DC10, qword_384ECD0, v325);
  v330 = sub_1C6C340();
  if ( !v330 )
  {
    v760 = 53;
    sub_C5700(a1, &v1548, qword_384F220);
    v758 = v1549;
    goto LABEL_838;
  }
  *(_DWORD *)(v12 + 108) = 53;
  v331 = sub_BF8B0(a1, v330, qword_384F250);
  if ( !v331 )
  {
    v1081 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 53;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1081;
    v1082 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1082;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384D5D8, v331);
  v332 = sub_1C6C340();
  if ( !v332 )
  {
    v760 = 54;
    sub_C5700(a1, &v1548, qword_384F220);
    v758 = v1549;
    goto LABEL_838;
  }
  *(_DWORD *)(v12 + 108) = 54;
  v333 = sub_BF8B0(a1, v332, qword_384F250);
  if ( !v333 )
  {
    v1079 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 54;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1079;
    v1080 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1080;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384EAA8, v333);
  v334 = qword_384F258;
  v335 = (_QWORD *)sub_C3630((_DWORD)a1, qword_384F260, 0, 0, 0, 0, 0LL);
  if ( !v335 )
    goto LABEL_1162;
  *(_DWORD *)(v12 + 108) = 55;
  v336 = sub_B22B0(a1, v335, qword_384F268);
  v29 = (*v335)-- == 1LL;
  v337 = (_QWORD *)v336;
  if ( v29 )
    sub_95CC0(v335);
  if ( !v337 )
    goto LABEL_1162;
  v338 = PySequence_Contains(v337, v334);
  v29 = (*v337)-- == 1LL;
  v339 = v338;
  if ( v29 )
    sub_95CC0(v337);
  if ( v339 == -1 )
    goto LABEL_1162;
  if ( v339 != 1 )
  {
    *(_QWORD *)v1433 = sub_1C6C2C0();
    if ( *(_QWORD *)v1433 )
    {
      v340 = sub_1C6C240();
      if ( v340 )
      {
        *(_DWORD *)(v12 + 108) = 55;
        v341 = sub_B1A80(a1, v340);
        v342 = (_QWORD *)v341;
        if ( v341 )
        {
          v343 = sub_A4FF0(v341, qword_384D810);
          v29 = (*v342)-- == 1LL;
          v344 = (_QWORD *)v343;
          if ( v29 )
            sub_95CC0(v342);
          if ( v344 )
          {
            v345 = PyNumber_Long(v344);
            v29 = (*v344)-- == 1LL;
            v346 = (_QWORD *)v345;
            if ( v29 )
              sub_95CC0(v344);
            if ( v346 )
            {
              *(_DWORD *)(v12 + 108) = 55;
              v347 = sub_C0FA0(a1, *(_QWORD *)v1433, v346);
              v29 = (*v346)-- == 1LL;
              v348 = v347;
              if ( v29 )
                sub_95CC0(v346);
              if ( v348 )
                goto LABEL_357;
            }
          }
        }
LABEL_1162:
        v1091 = a1[11];
        v758 = (_QWORD *)a1[13];
        a1[11] = 0LL;
        v760 = 55;
        a1[13] = 0LL;
        v1548.m128i_i64[0] = v1091;
        v1092 = a1[12];
        v1549 = v758;
        v1548.m128i_i64[1] = v1092;
        a1[12] = 0LL;
        goto LABEL_838;
      }
LABEL_1154:
      v760 = 55;
      sub_C5700(a1, &v1548, qword_384EE48);
      v758 = v1549;
      goto LABEL_838;
    }
LABEL_1155:
    v760 = 55;
    sub_C5700(a1, &v1548, qword_384EF60);
    v758 = v1549;
    goto LABEL_838;
  }
  v1086 = sub_1C6C2C0();
  if ( !v1086 )
    goto LABEL_1155;
  v1087 = sub_1C6C240();
  if ( !v1087 )
    goto LABEL_1154;
  *(_DWORD *)(v12 + 108) = 55;
  v1088 = sub_B1A80(a1, v1087);
  v1089 = (_QWORD *)v1088;
  if ( !v1088 )
    goto LABEL_1162;
  *(_DWORD *)(v12 + 108) = 55;
  v1090 = sub_C0FA0(a1, v1086, v1088);
  v29 = (*v1089)-- == 1LL;
  v348 = v1090;
  if ( v29 )
    sub_95CC0(v1089);
  if ( !v348 )
    goto LABEL_1162;
LABEL_357:
  sub_D6010(qword_390DC10, qword_384ECC0, v348);
  v349 = sub_CB210(qword_384F270);
  v350 = sub_C2AC0(
           (int)sub_1D15020,
           qword_384E280,
           0,
           qword_390DA30,
           0,
           0,
           v349,
           qword_390DC08,
           qword_384D620,
           0LL,
           0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E280, v350);
  v351 = sub_C7690();
  v352 = sub_AF4B0(a1, v351, qword_384F278);
  if ( v352 == -1 )
  {
    v1015 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 37;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1015;
    v1016 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1016;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  if ( v352 )
  {
    v353 = sub_C7690();
    v354 = sub_B00D0(a1, v353, qword_384F278);
    if ( !v354 )
    {
      v1423 = a1[11];
      v758 = (_QWORD *)a1[13];
      a1[11] = 0LL;
      v760 = 70;
      a1[13] = 0LL;
      v1548.m128i_i64[0] = v1423;
      v1424 = a1[12];
      v1549 = v758;
      v1548.m128i_i64[1] = v1424;
      a1[12] = 0LL;
      goto LABEL_838;
    }
  }
  else
  {
    v1425 = (_QWORD *)sub_C4A20(qword_390DC10, qword_384F010);
    if ( !v1425 || !*v1425 )
    {
      v1432 = (_QWORD *)sub_C4A20(qword_384F848, qword_384F010);
      if ( !v1432 || !*v1432 )
      {
        v760 = 72;
        sub_C5700(a1, &v1548, qword_384F010);
        v758 = v1549;
        goto LABEL_838;
      }
    }
    v1426 = sub_C7F00(a1);
    v1427 = (_QWORD *)v1426;
    if ( !v1426 )
      goto LABEL_1665;
    v1428 = sub_C7F70(a1, v1426);
    v29 = (*v1427)-- == 1LL;
    v1429 = v1428;
    if ( v29 )
      sub_95CC0(v1427);
    v354 = v1429;
    if ( !v1429 )
    {
LABEL_1665:
      v1430 = a1[11];
      v758 = (_QWORD *)a1[13];
      a1[11] = 0LL;
      v760 = 72;
      a1[13] = 0LL;
      v1548.m128i_i64[0] = v1430;
      v1431 = a1[12];
      v1549 = v758;
      v1548.m128i_i64[1] = v1431;
      a1[12] = 0LL;
      goto LABEL_838;
    }
  }
  sub_D6010(qword_390DC10, qword_384F280, v354);
  v355 = sub_C76F0();
  v356 = (_QWORD *)sub_B00D0(a1, v355, qword_384F288);
  if ( !v356 )
    goto LABEL_1656;
  v357 = sub_1C6C120();
  v358 = qword_384F290;
  *(_DWORD *)(v12 + 108) = 74;
  v1550 = (_QWORD *)v357;
  v1551 = v358;
  v359 = sub_C01C0(a1, v356, &v1550);
  v29 = (*v356)-- == 1LL;
  v360 = v359;
  if ( v29 )
    sub_95CC0(v356);
  if ( !v360 )
  {
LABEL_1656:
    v1421 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 74;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1421;
    v1422 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1422;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384E2E8, v360);
  v361 = sub_C76F0();
  v362 = (_QWORD *)sub_B00D0(a1, v361, qword_384F288);
  if ( !v362 )
    goto LABEL_1651;
  v363 = sub_1C6C120();
  if ( !v363 )
  {
    sub_C5700(a1, &v1548, qword_384F280);
    v29 = (*v362)-- == 1LL;
    if ( v29 )
    {
      v1420 = v362;
      v760 = 75;
      sub_95CC0(v1420);
      v758 = v1549;
    }
    else
    {
      v758 = v1549;
      v760 = 75;
    }
    goto LABEL_838;
  }
  v364 = qword_384F298;
  *(_DWORD *)(v12 + 108) = 75;
  v1550 = (_QWORD *)v363;
  v1551 = v364;
  v365 = sub_C01C0(a1, v362, &v1550);
  v29 = (*v362)-- == 1LL;
  v366 = v365;
  if ( v29 )
    sub_95CC0(v362);
  if ( !v366 )
  {
LABEL_1651:
    v1418 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 75;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1418;
    v1419 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1419;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384E318, v366);
  v367 = (__int64 *)sub_C4A20(qword_390DC10, qword_384F0E8);
  if ( !v367 || (v1446 = *v367) == 0 )
  {
    v1417 = (__int64 *)sub_C4A20(qword_384F848, qword_384F0E8);
    if ( !v1417 || (v1446 = *v1417) == 0 )
    {
      sub_C5700(a1, &v1548, qword_384F0E8);
      goto LABEL_1609;
    }
  }
  v368 = sub_1C6C170();
  if ( !v368 )
  {
    sub_C5700(a1, &v1548, qword_384F0C0);
    goto LABEL_1609;
  }
  v369 = sub_C76F0();
  v370 = (_QWORD *)sub_B00D0(a1, v369, qword_384F288);
  if ( !v370 )
    goto LABEL_1646;
  v371 = sub_1C6C120();
  if ( !v371 )
  {
    sub_C5700(a1, &v1548, qword_384F280);
    v29 = (*v370)-- == 1LL;
    if ( v29 )
      sub_95CC0(v370);
    goto LABEL_1609;
  }
  v372 = qword_384F2A0;
  *(_DWORD *)(v12 + 108) = 78;
  v1550 = (_QWORD *)v371;
  v1551 = v372;
  v373 = sub_C01C0(a1, v370, &v1550);
  v29 = (*v370)-- == 1LL;
  v374 = (_QWORD *)v373;
  if ( v29 )
    sub_95CC0(v370);
  if ( !v374 )
  {
LABEL_1646:
    v1414 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1414;
    v1415 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1415;
    v1416 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1416;
    goto LABEL_1609;
  }
  v375 = sub_1C6C0D0();
  if ( v375 )
  {
    *(_DWORD *)(v12 + 108) = 78;
    v1550 = v374;
    v1551 = v375;
    v376 = sub_B7100(a1, v368, &v1550, qword_384F2A8);
    v29 = (*v374)-- == 1LL;
    v377 = (_QWORD *)v376;
    if ( v29 )
      sub_95CC0(v374);
    if ( v377 )
    {
      *(_DWORD *)(v12 + 108) = 78;
      v378 = sub_C0FA0(a1, v1446, v377);
      v29 = (*v377)-- == 1LL;
      v379 = v378;
      if ( v29 )
        sub_95CC0(v377);
      if ( v379 )
      {
        sub_D6010(qword_390DC10, qword_384E4E0, v379);
        goto LABEL_385;
      }
    }
    goto LABEL_1646;
  }
  sub_C5700(a1, &v1548, qword_384DE20);
  v29 = (*v374)-- == 1LL;
  if ( v29 )
    sub_95CC0(v374);
LABEL_1609:
  v1392 = _mm_load_si128(&v1548);
  v1548 = 0uLL;
  v1393 = (_QWORD *)a1[14];
  v1547 = v1549;
  v1549 = 0LL;
  v1546 = v1392;
  if ( v1393 )
    ++*v1393;
  v1394 = (_QWORD *)a1[15];
  if ( v1394 )
    ++*v1394;
  v1395 = (_QWORD *)a1[16];
  if ( v1395 )
    ++*v1395;
  v1396 = v1547;
  v1545[0] = v1393;
  v1545[1] = v1394;
  v1545[2] = v1395;
  if ( v1547 )
  {
    v1397 = sub_CC260(v12, 78LL);
    v1398 = v1547;
    *(_QWORD *)(v1397 + 16) = v1547;
    v1399 = v1397;
    ++*v1396;
    v29 = (*v1398)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1398);
  }
  else
  {
    v1399 = sub_CC260(v12, 78LL);
  }
  v1547 = (_QWORD *)v1399;
  sub_194750(a1, &v1546);
  v760 = sub_21AA00(a1, a1[14], PyExc_Exception);
  if ( !v760 )
  {
    if ( !(unsigned __int8)sub_C5330(a1, &v1548) )
      v760 = 77;
    if ( v1549 && v1549[3] == v12 )
      *(_DWORD *)(v12 + 108) = *((_DWORD *)v1549 + 9);
    goto LABEL_1636;
  }
  sub_D60B0(qword_390DC10, qword_384E9B0, a1[15]);
  v1400 = sub_1724E0(qword_384D898);
  v1401 = sub_1C69F80();
  if ( !v1401 )
  {
    sub_C5700(a1, &v1548, qword_384D8A0);
    goto LABEL_1633;
  }
  v1402 = sub_B00D0(a1, v1401, qword_384D8A8);
  v1403 = (_QWORD *)v1402;
  if ( !v1402 )
    goto LABEL_1632;
  v1404 = sub_AD920(v1402, qword_384F2B0);
  v29 = (*v1403)-- == 1LL;
  v1405 = (_QWORD *)v1404;
  if ( v29 )
    sub_95CC0(v1403);
  if ( !v1405 )
    goto LABEL_1632;
  *(_DWORD *)(v12 + 108) = 80;
  v1406 = sub_C0FA0(a1, v1400, v1405);
  v29 = (*v1405)-- == 1LL;
  v1407 = (_QWORD *)v1406;
  if ( v29 )
    sub_95CC0(v1405);
  if ( !v1407 )
  {
LABEL_1632:
    v1408 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1408;
    v1409 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1409;
    v1410 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1410;
LABEL_1633:
    v1411 = v1548;
    v1548 = 0uLL;
    v1412 = v1549;
    v1549 = 0LL;
    if ( (unsigned int)PyDict_DelItem(qword_390DC10, qword_384E9B0) == -1 )
      sub_95E40(a1);
    v1549 = v1412;
    v1548 = v1411;
    v760 = 80;
LABEL_1636:
    v1413 = v1548;
    v758 = v1549;
    v1548 = 0uLL;
    v1549 = 0LL;
    sub_B40A0(a1, v1545);
    v1548 = v1413;
    v1549 = v758;
    goto LABEL_838;
  }
  v29 = (*v1407)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1407);
  if ( (unsigned int)PyDict_DelItem(qword_390DC10, qword_384E9B0) == -1 )
    sub_95E40(a1);
  sub_B40A0(a1, v1545);
LABEL_385:
  v380 = sub_1C68820();
  if ( v380 )
  {
    v381 = sub_C76F0();
    v382 = (_QWORD *)sub_B00D0(a1, v381, qword_384F288);
    if ( !v382 )
    {
LABEL_1605:
      v1389 = a1[11];
      a1[11] = 0LL;
      v1548.m128i_i64[0] = v1389;
      v1390 = a1[12];
      a1[12] = 0LL;
      v1548.m128i_i64[1] = v1390;
      v1391 = (_QWORD *)a1[13];
      a1[13] = 0LL;
      v1549 = v1391;
      goto LABEL_1570;
    }
    v383 = sub_1C6C120();
    if ( v383 )
    {
      v384 = qword_384F2B8;
      *(_DWORD *)(v12 + 108) = 83;
      v1550 = (_QWORD *)v383;
      v1551 = v384;
      v385 = sub_C01C0(a1, v382, &v1550);
      v29 = (*v382)-- == 1LL;
      v386 = (_QWORD *)v385;
      if ( v29 )
        sub_95CC0(v382);
      if ( v386 )
      {
        *(_DWORD *)(v12 + 108) = 83;
        v387 = sub_C0FA0(a1, v380, v386);
        v29 = (*v386)-- == 1LL;
        v388 = v387;
        if ( v29 )
          sub_95CC0(v386);
        if ( v388 )
        {
          sub_D6010(qword_390DC10, qword_384DE60, v388);
          goto LABEL_395;
        }
      }
      goto LABEL_1605;
    }
    sub_C5700(a1, &v1548, qword_384F280);
    v29 = (*v382)-- == 1LL;
    if ( v29 )
      sub_95CC0(v382);
  }
  else
  {
    sub_C5700(a1, &v1548, qword_384F040);
  }
LABEL_1570:
  v1367 = _mm_load_si128(&v1548);
  v1548 = 0uLL;
  v1368 = (_QWORD *)a1[14];
  v1544 = v1549;
  v1549 = 0LL;
  v1543 = v1367;
  if ( v1368 )
    ++*v1368;
  v1369 = (_QWORD *)a1[15];
  if ( v1369 )
    ++*v1369;
  v1370 = (_QWORD *)a1[16];
  if ( v1370 )
    ++*v1370;
  v1371 = v1544;
  v1542[0] = v1368;
  v1542[1] = v1369;
  v1542[2] = v1370;
  if ( v1544 )
  {
    v1372 = sub_CC260(v12, 83LL);
    v1373 = v1544;
    *(_QWORD *)(v1372 + 16) = v1544;
    v1374 = v1372;
    ++*v1371;
    v29 = (*v1373)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1373);
  }
  else
  {
    v1374 = sub_CC260(v12, 83LL);
  }
  v1544 = (_QWORD *)v1374;
  sub_194750(a1, &v1543);
  v760 = sub_21AA00(a1, a1[14], PyExc_Exception);
  if ( !v760 )
  {
    if ( !(unsigned __int8)sub_C5330(a1, &v1548) )
      v760 = 82;
    if ( v1549 && v1549[3] == v12 )
      *(_DWORD *)(v12 + 108) = *((_DWORD *)v1549 + 9);
    goto LABEL_1597;
  }
  sub_D60B0(qword_390DC10, qword_384E9B0, a1[15]);
  v1375 = sub_1724E0(qword_384D898);
  v1376 = sub_1C69F80();
  if ( !v1376 )
  {
    sub_C5700(a1, &v1548, qword_384D8A0);
    goto LABEL_1594;
  }
  v1377 = sub_B00D0(a1, v1376, qword_384D8A8);
  v1378 = (_QWORD *)v1377;
  if ( !v1377 )
    goto LABEL_1593;
  v1379 = sub_AD920(v1377, qword_384F2C0);
  v29 = (*v1378)-- == 1LL;
  v1380 = (_QWORD *)v1379;
  if ( v29 )
    sub_95CC0(v1378);
  if ( !v1380 )
    goto LABEL_1593;
  *(_DWORD *)(v12 + 108) = 85;
  v1381 = sub_C0FA0(a1, v1375, v1380);
  v29 = (*v1380)-- == 1LL;
  v1382 = (_QWORD *)v1381;
  if ( v29 )
    sub_95CC0(v1380);
  if ( !v1382 )
  {
LABEL_1593:
    v1383 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1383;
    v1384 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1384;
    v1385 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1385;
LABEL_1594:
    v1386 = v1548;
    v1548 = 0uLL;
    v1387 = v1549;
    v1549 = 0LL;
    if ( (unsigned int)PyDict_DelItem(qword_390DC10, qword_384E9B0) == -1 )
      sub_95E40(a1);
    v1549 = v1387;
    v1548 = v1386;
    v760 = 85;
LABEL_1597:
    v1388 = v1548;
    v758 = v1549;
    v1548 = 0uLL;
    v1549 = 0LL;
    sub_B40A0(a1, v1542);
    v1548 = v1388;
    v1549 = v758;
    goto LABEL_838;
  }
  v29 = (*v1382)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1382);
  if ( (unsigned int)PyDict_DelItem(qword_390DC10, qword_384E9B0) == -1 )
    sub_95E40(a1);
  sub_B40A0(a1, v1542);
LABEL_395:
  v1447 = sub_1C68820();
  if ( !v1447 )
  {
    sub_C5700(a1, &v1548, qword_384F040);
    goto LABEL_1528;
  }
  v389 = sub_1C6C170();
  if ( !v389 )
  {
    sub_C5700(a1, &v1548, qword_384F0C0);
    goto LABEL_1528;
  }
  v390 = sub_C76F0();
  v391 = (_QWORD *)sub_B00D0(a1, v390, qword_384F288);
  if ( !v391 )
  {
LABEL_1565:
    v1364 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1364;
    v1365 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1365;
    v1366 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1366;
    goto LABEL_1528;
  }
  v392 = sub_1C6C120();
  if ( !v392 )
  {
    sub_C5700(a1, &v1548, qword_384F280);
    v29 = (*v391)-- == 1LL;
    if ( v29 )
      sub_95CC0(v391);
LABEL_1528:
    v1342 = _mm_load_si128(&v1548);
    v1548 = 0uLL;
    v1343 = (_QWORD *)a1[14];
    v1541 = v1549;
    v1549 = 0LL;
    v1540 = v1342;
    if ( v1343 )
      ++*v1343;
    v1344 = (_QWORD *)a1[15];
    if ( v1344 )
      ++*v1344;
    v1345 = (_QWORD *)a1[16];
    if ( v1345 )
      ++*v1345;
    v1346 = v1541;
    v1539[0] = v1343;
    v1539[1] = v1344;
    v1539[2] = v1345;
    if ( v1541 )
    {
      v1347 = sub_CC260(v12, 88LL);
      v1348 = v1541;
      *(_QWORD *)(v1347 + 16) = v1541;
      v1349 = v1347;
      ++*v1346;
      v29 = (*v1348)-- == 1LL;
      if ( v29 )
        sub_95CC0(v1348);
    }
    else
    {
      v1349 = sub_CC260(v12, 88LL);
    }
    v1541 = (_QWORD *)v1349;
    sub_194750(a1, &v1540);
    v760 = sub_21AA00(a1, a1[14], PyExc_Exception);
    if ( v760 )
    {
      sub_D60B0(qword_390DC10, qword_384E9B0, a1[15]);
      v1350 = sub_1724E0(qword_384D898);
      v1351 = sub_1C69F80();
      if ( v1351 )
      {
        v1352 = sub_B00D0(a1, v1351, qword_384D8A8);
        v1353 = (_QWORD *)v1352;
        if ( v1352 )
        {
          v1354 = sub_AD920(v1352, qword_384F2D0);
          v29 = (*v1353)-- == 1LL;
          v1355 = (_QWORD *)v1354;
          if ( v29 )
            sub_95CC0(v1353);
          if ( v1355 )
          {
            *(_DWORD *)(v12 + 108) = 90;
            v1356 = sub_C0FA0(a1, v1350, v1355);
            v29 = (*v1355)-- == 1LL;
            v1357 = (_QWORD *)v1356;
            if ( v29 )
              sub_95CC0(v1355);
            if ( v1357 )
            {
              v29 = (*v1357)-- == 1LL;
              if ( v29 )
                sub_95CC0(v1357);
              if ( (unsigned int)PyDict_DelItem(qword_390DC10, qword_384E9B0) == -1 )
                sub_95E40(a1);
              sub_B40A0(a1, v1539);
              goto LABEL_410;
            }
          }
        }
        v1358 = a1[11];
        a1[11] = 0LL;
        v1548.m128i_i64[0] = v1358;
        v1359 = a1[12];
        a1[12] = 0LL;
        v1548.m128i_i64[1] = v1359;
        v1360 = (_QWORD *)a1[13];
        a1[13] = 0LL;
        v1549 = v1360;
      }
      else
      {
        sub_C5700(a1, &v1548, qword_384D8A0);
      }
      v1361 = v1548;
      v1548 = 0uLL;
      v1362 = v1549;
      v1549 = 0LL;
      if ( (unsigned int)PyDict_DelItem(qword_390DC10, qword_384E9B0) == -1 )
        sub_95E40(a1);
      v1549 = v1362;
      v1548 = v1361;
      v760 = 90;
    }
    else
    {
      if ( !(unsigned __int8)sub_C5330(a1, &v1548) )
        v760 = 87;
      if ( v1549 && v1549[3] == v12 )
        *(_DWORD *)(v12 + 108) = *((_DWORD *)v1549 + 9);
    }
    v1363 = v1548;
    v758 = v1549;
    v1548 = 0uLL;
    v1549 = 0LL;
    sub_B40A0(a1, v1539);
    v1548 = v1363;
    v1549 = v758;
    goto LABEL_838;
  }
  v393 = qword_384F2C8;
  *(_DWORD *)(v12 + 108) = 88;
  v1550 = (_QWORD *)v392;
  v1551 = v393;
  v394 = sub_C01C0(a1, v391, &v1550);
  v29 = (*v391)-- == 1LL;
  v395 = (_QWORD *)v394;
  if ( v29 )
    sub_95CC0(v391);
  if ( !v395 )
    goto LABEL_1565;
  v396 = sub_1C6C0D0();
  if ( !v396 )
  {
    sub_C5700(a1, &v1548, qword_384DE20);
    v29 = (*v395)-- == 1LL;
    if ( v29 )
      sub_95CC0(v395);
    goto LABEL_1528;
  }
  *(_DWORD *)(v12 + 108) = 88;
  v1550 = v395;
  v1551 = v396;
  v397 = sub_B7100(a1, v389, &v1550, qword_384F2A8);
  v29 = (*v395)-- == 1LL;
  v398 = (_QWORD *)v397;
  if ( v29 )
    sub_95CC0(v395);
  if ( !v398 )
    goto LABEL_1565;
  *(_DWORD *)(v12 + 108) = 88;
  v399 = sub_C0FA0(a1, v1447, v398);
  v29 = (*v398)-- == 1LL;
  v400 = v399;
  if ( v29 )
    sub_95CC0(v398);
  if ( !v400 )
    goto LABEL_1565;
  sub_D6010(qword_390DC10, qword_384E778, v400);
LABEL_410:
  v1448 = sub_1C68820();
  if ( !v1448 )
  {
    sub_C5700(a1, &v1548, qword_384F040);
    goto LABEL_1486;
  }
  v401 = sub_1C6C170();
  if ( !v401 )
  {
    sub_C5700(a1, &v1548, qword_384F0C0);
    goto LABEL_1486;
  }
  v402 = sub_C76F0();
  v403 = (_QWORD *)sub_B00D0(a1, v402, qword_384F288);
  if ( !v403 )
    goto LABEL_1523;
  v404 = sub_1C6C120();
  if ( !v404 )
  {
    sub_C5700(a1, &v1548, qword_384F280);
    v29 = (*v403)-- == 1LL;
    if ( v29 )
      sub_95CC0(v403);
    goto LABEL_1486;
  }
  v405 = qword_384F2D8;
  *(_DWORD *)(v12 + 108) = 93;
  v1550 = (_QWORD *)v404;
  v1551 = v405;
  v406 = sub_C01C0(a1, v403, &v1550);
  v29 = (*v403)-- == 1LL;
  v407 = (_QWORD *)v406;
  if ( v29 )
    sub_95CC0(v403);
  if ( !v407 )
  {
LABEL_1523:
    v1339 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1339;
    v1340 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1340;
    v1341 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1341;
    goto LABEL_1486;
  }
  v408 = sub_1C6C0D0();
  if ( v408 )
  {
    *(_DWORD *)(v12 + 108) = 93;
    v1550 = v407;
    v1551 = v408;
    v409 = sub_B7100(a1, v401, &v1550, qword_384F2A8);
    v29 = (*v407)-- == 1LL;
    v410 = (_QWORD *)v409;
    if ( v29 )
      sub_95CC0(v407);
    if ( v410 )
    {
      *(_DWORD *)(v12 + 108) = 93;
      v411 = sub_C0FA0(a1, v1448, v410);
      v29 = (*v410)-- == 1LL;
      v412 = v411;
      if ( v29 )
        sub_95CC0(v410);
      if ( v412 )
      {
        sub_D6010(qword_390DC10, qword_384E7A8, v412);
        goto LABEL_425;
      }
    }
    goto LABEL_1523;
  }
  sub_C5700(a1, &v1548, qword_384DE20);
  v29 = (*v407)-- == 1LL;
  if ( v29 )
    sub_95CC0(v407);
LABEL_1486:
  v1317 = _mm_load_si128(&v1548);
  v1548 = 0uLL;
  v1318 = (_QWORD *)a1[14];
  v1538 = v1549;
  v1549 = 0LL;
  v1537 = v1317;
  if ( v1318 )
    ++*v1318;
  v1319 = (_QWORD *)a1[15];
  if ( v1319 )
    ++*v1319;
  v1320 = (_QWORD *)a1[16];
  if ( v1320 )
    ++*v1320;
  v1321 = v1538;
  v1536[0] = v1318;
  v1536[1] = v1319;
  v1536[2] = v1320;
  if ( v1538 )
  {
    v1322 = sub_CC260(v12, 93LL);
    v1323 = v1538;
    *(_QWORD *)(v1322 + 16) = v1538;
    v1324 = v1322;
    ++*v1321;
    v29 = (*v1323)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1323);
  }
  else
  {
    v1324 = sub_CC260(v12, 93LL);
  }
  v1538 = (_QWORD *)v1324;
  sub_194750(a1, &v1537);
  v760 = sub_21AA00(a1, a1[14], PyExc_Exception);
  if ( !v760 )
  {
    if ( !(unsigned __int8)sub_C5330(a1, &v1548) )
      v760 = 92;
    if ( v1549 && v1549[3] == v12 )
      *(_DWORD *)(v12 + 108) = *((_DWORD *)v1549 + 9);
    goto LABEL_1513;
  }
  sub_D60B0(qword_390DC10, qword_384E9B0, a1[15]);
  v1325 = sub_1724E0(qword_384D898);
  v1326 = sub_1C69F80();
  if ( !v1326 )
  {
    sub_C5700(a1, &v1548, qword_384D8A0);
    goto LABEL_1510;
  }
  v1327 = sub_B00D0(a1, v1326, qword_384D8A8);
  v1328 = (_QWORD *)v1327;
  if ( !v1327 )
    goto LABEL_1509;
  v1329 = sub_AD920(v1327, qword_384F2E0);
  v29 = (*v1328)-- == 1LL;
  v1330 = (_QWORD *)v1329;
  if ( v29 )
    sub_95CC0(v1328);
  if ( !v1330 )
    goto LABEL_1509;
  *(_DWORD *)(v12 + 108) = 95;
  v1331 = sub_C0FA0(a1, v1325, v1330);
  v29 = (*v1330)-- == 1LL;
  v1332 = (_QWORD *)v1331;
  if ( v29 )
    sub_95CC0(v1330);
  if ( !v1332 )
  {
LABEL_1509:
    v1333 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1333;
    v1334 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1334;
    v1335 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1335;
LABEL_1510:
    v1336 = v1548;
    v1548 = 0uLL;
    v1337 = v1549;
    v1549 = 0LL;
    if ( (unsigned int)PyDict_DelItem(qword_390DC10, qword_384E9B0) == -1 )
      sub_95E40(a1);
    v1549 = v1337;
    v1548 = v1336;
    v760 = 95;
LABEL_1513:
    v1338 = v1548;
    v758 = v1549;
    v1548 = 0uLL;
    v1549 = 0LL;
    sub_B40A0(a1, v1536);
    v1548 = v1338;
    v1549 = v758;
    goto LABEL_838;
  }
  v29 = (*v1332)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1332);
  if ( (unsigned int)PyDict_DelItem(qword_390DC10, qword_384E9B0) == -1 )
    sub_95E40(a1);
  sub_B40A0(a1, v1536);
LABEL_425:
  v1449 = sub_1C68820();
  if ( !v1449 )
  {
    sub_C5700(a1, &v1548, qword_384F040);
    goto LABEL_1444;
  }
  v413 = sub_1C6C170();
  if ( !v413 )
  {
    sub_C5700(a1, &v1548, qword_384F0C0);
    goto LABEL_1444;
  }
  v414 = sub_C76F0();
  v415 = (_QWORD *)sub_B00D0(a1, v414, qword_384F288);
  if ( !v415 )
  {
LABEL_1481:
    v1314 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1314;
    v1315 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1315;
    v1316 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1316;
    goto LABEL_1444;
  }
  v416 = sub_1C6C120();
  if ( !v416 )
  {
    sub_C5700(a1, &v1548, qword_384F280);
    v29 = (*v415)-- == 1LL;
    if ( v29 )
      sub_95CC0(v415);
LABEL_1444:
    v1292 = _mm_load_si128(&v1548);
    v1548 = 0uLL;
    v1293 = (_QWORD *)a1[14];
    v1535 = v1549;
    v1549 = 0LL;
    v1534 = v1292;
    if ( v1293 )
      ++*v1293;
    v1294 = (_QWORD *)a1[15];
    if ( v1294 )
      ++*v1294;
    v1295 = (_QWORD *)a1[16];
    if ( v1295 )
      ++*v1295;
    v1296 = v1535;
    v1533[0] = v1293;
    v1533[1] = v1294;
    v1533[2] = v1295;
    if ( v1535 )
    {
      v1297 = sub_CC260(v12, 98LL);
      v1298 = v1535;
      *(_QWORD *)(v1297 + 16) = v1535;
      v1299 = v1297;
      ++*v1296;
      v29 = (*v1298)-- == 1LL;
      if ( v29 )
        sub_95CC0(v1298);
    }
    else
    {
      v1299 = sub_CC260(v12, 98LL);
    }
    v1535 = (_QWORD *)v1299;
    sub_194750(a1, &v1534);
    v760 = sub_21AA00(a1, a1[14], PyExc_Exception);
    if ( v760 )
    {
      sub_D60B0(qword_390DC10, qword_384E9B0, a1[15]);
      v1300 = sub_1724E0(qword_384D898);
      v1301 = sub_1C69F80();
      if ( v1301 )
      {
        v1302 = sub_B00D0(a1, v1301, qword_384D8A8);
        v1303 = (_QWORD *)v1302;
        if ( v1302 )
        {
          v1304 = sub_AD920(v1302, qword_384F2F0);
          v29 = (*v1303)-- == 1LL;
          v1305 = (_QWORD *)v1304;
          if ( v29 )
            sub_95CC0(v1303);
          if ( v1305 )
          {
            *(_DWORD *)(v12 + 108) = 100;
            v1306 = sub_C0FA0(a1, v1300, v1305);
            v29 = (*v1305)-- == 1LL;
            v1307 = (_QWORD *)v1306;
            if ( v29 )
              sub_95CC0(v1305);
            if ( v1307 )
            {
              v29 = (*v1307)-- == 1LL;
              if ( v29 )
                sub_95CC0(v1307);
              if ( (unsigned int)PyDict_DelItem(qword_390DC10, qword_384E9B0) == -1 )
                sub_95E40(a1);
              sub_B40A0(a1, v1533);
              goto LABEL_440;
            }
          }
        }
        v1308 = a1[11];
        a1[11] = 0LL;
        v1548.m128i_i64[0] = v1308;
        v1309 = a1[12];
        a1[12] = 0LL;
        v1548.m128i_i64[1] = v1309;
        v1310 = (_QWORD *)a1[13];
        a1[13] = 0LL;
        v1549 = v1310;
      }
      else
      {
        sub_C5700(a1, &v1548, qword_384D8A0);
      }
      v1311 = v1548;
      v1548 = 0uLL;
      v1312 = v1549;
      v1549 = 0LL;
      if ( (unsigned int)PyDict_DelItem(qword_390DC10, qword_384E9B0) == -1 )
        sub_95E40(a1);
      v1549 = v1312;
      v1548 = v1311;
      v760 = 100;
    }
    else
    {
      if ( !(unsigned __int8)sub_C5330(a1, &v1548) )
        v760 = 97;
      if ( v1549 && v1549[3] == v12 )
        *(_DWORD *)(v12 + 108) = *((_DWORD *)v1549 + 9);
    }
    v1313 = v1548;
    v758 = v1549;
    v1548 = 0uLL;
    v1549 = 0LL;
    sub_B40A0(a1, v1533);
    v1548 = v1313;
    v1549 = v758;
    goto LABEL_838;
  }
  v417 = qword_384F2E8;
  *(_DWORD *)(v12 + 108) = 98;
  v1550 = (_QWORD *)v416;
  v1551 = v417;
  v418 = sub_C01C0(a1, v415, &v1550);
  v29 = (*v415)-- == 1LL;
  v419 = (_QWORD *)v418;
  if ( v29 )
    sub_95CC0(v415);
  if ( !v419 )
    goto LABEL_1481;
  v420 = sub_1C6C0D0();
  if ( !v420 )
  {
    sub_C5700(a1, &v1548, qword_384DE20);
    v29 = (*v419)-- == 1LL;
    if ( v29 )
      sub_95CC0(v419);
    goto LABEL_1444;
  }
  *(_DWORD *)(v12 + 108) = 98;
  v1550 = v419;
  v1551 = v420;
  v421 = sub_B7100(a1, v413, &v1550, qword_384F2A8);
  v29 = (*v419)-- == 1LL;
  v422 = (_QWORD *)v421;
  if ( v29 )
    sub_95CC0(v419);
  if ( !v422 )
    goto LABEL_1481;
  *(_DWORD *)(v12 + 108) = 98;
  v423 = sub_C0FA0(a1, v1449, v422);
  v29 = (*v422)-- == 1LL;
  v424 = v423;
  if ( v29 )
    sub_95CC0(v422);
  if ( !v424 )
    goto LABEL_1481;
  sub_D6010(qword_390DC10, qword_384EA28, v424);
LABEL_440:
  v1450 = sub_1C68820();
  if ( !v1450 )
  {
    sub_C5700(a1, &v1548, qword_384F040);
    goto LABEL_1402;
  }
  v425 = sub_1C6C170();
  if ( !v425 )
  {
    sub_C5700(a1, &v1548, qword_384F0C0);
    goto LABEL_1402;
  }
  v426 = sub_C76F0();
  v427 = (_QWORD *)sub_B00D0(a1, v426, qword_384F288);
  if ( !v427 )
    goto LABEL_1439;
  v428 = sub_1C6C120();
  if ( !v428 )
  {
    sub_C5700(a1, &v1548, qword_384F280);
    v29 = (*v427)-- == 1LL;
    if ( v29 )
      sub_95CC0(v427);
    goto LABEL_1402;
  }
  v429 = qword_384F2F8;
  *(_DWORD *)(v12 + 108) = 103;
  v1550 = (_QWORD *)v428;
  v1551 = v429;
  v430 = sub_C01C0(a1, v427, &v1550);
  v29 = (*v427)-- == 1LL;
  v431 = (_QWORD *)v430;
  if ( v29 )
    sub_95CC0(v427);
  if ( !v431 )
  {
LABEL_1439:
    v1289 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1289;
    v1290 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1290;
    v1291 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1291;
    goto LABEL_1402;
  }
  v432 = sub_1C6C0D0();
  if ( v432 )
  {
    *(_DWORD *)(v12 + 108) = 103;
    v1550 = v431;
    v1551 = v432;
    v433 = sub_B7100(a1, v425, &v1550, qword_384F2A8);
    v29 = (*v431)-- == 1LL;
    v434 = (_QWORD *)v433;
    if ( v29 )
      sub_95CC0(v431);
    if ( v434 )
    {
      *(_DWORD *)(v12 + 108) = 103;
      v435 = sub_C0FA0(a1, v1450, v434);
      v29 = (*v434)-- == 1LL;
      v436 = v435;
      if ( v29 )
        sub_95CC0(v434);
      if ( v436 )
      {
        sub_D6010(qword_390DC10, qword_384EA18, v436);
        goto LABEL_455;
      }
    }
    goto LABEL_1439;
  }
  sub_C5700(a1, &v1548, qword_384DE20);
  v29 = (*v431)-- == 1LL;
  if ( v29 )
    sub_95CC0(v431);
LABEL_1402:
  v1267 = _mm_load_si128(&v1548);
  v1548 = 0uLL;
  v1268 = (_QWORD *)a1[14];
  v1532 = v1549;
  v1549 = 0LL;
  v1531 = v1267;
  if ( v1268 )
    ++*v1268;
  v1269 = (_QWORD *)a1[15];
  if ( v1269 )
    ++*v1269;
  v1270 = (_QWORD *)a1[16];
  if ( v1270 )
    ++*v1270;
  v1271 = v1532;
  v1530[0] = v1268;
  v1530[1] = v1269;
  v1530[2] = v1270;
  if ( v1532 )
  {
    v1272 = sub_CC260(v12, 103LL);
    v1273 = v1532;
    *(_QWORD *)(v1272 + 16) = v1532;
    v1274 = v1272;
    ++*v1271;
    v29 = (*v1273)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1273);
  }
  else
  {
    v1274 = sub_CC260(v12, 103LL);
  }
  v1532 = (_QWORD *)v1274;
  sub_194750(a1, &v1531);
  v760 = sub_21AA00(a1, a1[14], PyExc_Exception);
  if ( !v760 )
  {
    if ( !(unsigned __int8)sub_C5330(a1, &v1548) )
      v760 = 102;
    if ( v1549 && v1549[3] == v12 )
      *(_DWORD *)(v12 + 108) = *((_DWORD *)v1549 + 9);
    goto LABEL_1429;
  }
  sub_D60B0(qword_390DC10, qword_384E9B0, a1[15]);
  v1275 = sub_1724E0(qword_384D898);
  v1276 = sub_1C69F80();
  if ( !v1276 )
  {
    sub_C5700(a1, &v1548, qword_384D8A0);
    goto LABEL_1426;
  }
  v1277 = sub_B00D0(a1, v1276, qword_384D8A8);
  v1278 = (_QWORD *)v1277;
  if ( !v1277 )
    goto LABEL_1425;
  v1279 = sub_AD920(v1277, qword_384F300);
  v29 = (*v1278)-- == 1LL;
  v1280 = (_QWORD *)v1279;
  if ( v29 )
    sub_95CC0(v1278);
  if ( !v1280 )
    goto LABEL_1425;
  *(_DWORD *)(v12 + 108) = 105;
  v1281 = sub_C0FA0(a1, v1275, v1280);
  v29 = (*v1280)-- == 1LL;
  v1282 = (_QWORD *)v1281;
  if ( v29 )
    sub_95CC0(v1280);
  if ( !v1282 )
  {
LABEL_1425:
    v1283 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1283;
    v1284 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1284;
    v1285 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1285;
LABEL_1426:
    v1286 = v1548;
    v1548 = 0uLL;
    v1287 = v1549;
    v1549 = 0LL;
    if ( (unsigned int)PyDict_DelItem(qword_390DC10, qword_384E9B0) == -1 )
      sub_95E40(a1);
    v1549 = v1287;
    v1548 = v1286;
    v760 = 105;
LABEL_1429:
    v1288 = v1548;
    v758 = v1549;
    v1548 = 0uLL;
    v1549 = 0LL;
    sub_B40A0(a1, v1530);
    v1548 = v1288;
    v1549 = v758;
    goto LABEL_838;
  }
  v29 = (*v1282)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1282);
  if ( (unsigned int)PyDict_DelItem(qword_390DC10, qword_384E9B0) == -1 )
    sub_95E40(a1);
  sub_B40A0(a1, v1530);
LABEL_455:
  v437 = (__int64 *)sub_C4A20(qword_390DC10, qword_384F078);
  if ( !v437 || (v438 = *v437) == 0 )
  {
    v1266 = (__int64 *)sub_C4A20(qword_384F848, qword_384F078);
    if ( !v1266 || (v438 = *v1266) == 0 )
    {
      v760 = 107;
      sub_C5700(a1, &v1548, qword_384F078);
      v758 = v1549;
      goto LABEL_838;
    }
  }
  *(_DWORD *)(v12 + 108) = 107;
  v439 = sub_BF8B0(a1, v438, qword_384F308);
  if ( !v439 )
  {
    v1264 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 107;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1264;
    v1265 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1265;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  sub_D6010(qword_390DC10, qword_384DFA8, v439);
  v1529 = "dddddddddddddddddddddddd";
  v440 = sub_CF760(a1, qword_384F310, &v1529);
  sub_D6010(qword_390DC10, qword_384DDB8, v440);
  v441 = sub_CB210(qword_384F318);
  v442 = sub_C2AC0((int)sub_1CCAA50, qword_384EDE8, 0, qword_390DA38, 0, 0, v441, qword_390DC08, 0LL, 0LL, 0LL);
  v443 = *(_QWORD *)&qword_384EDE8;
  v444 = qword_390DC10;
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EDE8, v442);
  v1451 = (_QWORD *)PyDict_New(v444, v443);
  v445 = (_QWORD *)PyDict_New(v444, v443);
  v446 = qword_384F320;
  v447 = qword_384F328;
  ++*v445;
  v448 = v445;
  PyDict_SetItem(v445, v447, v446);
  PyDict_SetItem(v448, qword_384F008, qword_384F330);
  PyDict_SetItem(v448, qword_384F338, qword_384EF50);
  v449 = (_QWORD *)sub_C2AC0(
                     (int)sub_1D024E0,
                     qword_384F340,
                     qword_384F348,
                     qword_390DA40,
                     0,
                     0,
                     0LL,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v448, *(_QWORD *)&qword_384F340, v449);
  v29 = (*v449)-- == 1LL;
  if ( v29 )
    sub_95CC0(v449);
  v450 = sub_B2750(a1, qword_390E010, qword_390DC08, 8LL);
  v451 = a1[3];
  a1[3] = v450;
  if ( v451 )
    *(_QWORD *)(v450 + 24) = v451;
  ++*(_QWORD *)v450;
  *(_BYTE *)(v450 + 116) = 1;
  v452 = sub_CB210(qword_384F270);
  v453 = sub_C2AC0(
           (int)sub_1CC4C20,
           qword_384D6E0,
           qword_384F350,
           qword_390DA48,
           0,
           0,
           v452,
           qword_390DC08,
           0LL,
           0LL,
           0LL);
  *(_DWORD *)(v450 + 108) = 230;
  v1465 = (_QWORD *)v453;
  v454 = sub_C0FA0(a1, &PyProperty_Type, v453);
  v456 = v1465;
  v457 = (_QWORD *)v454;
  v29 = (*v1465)-- == 1LL;
  if ( v29 )
  {
    v1466 = v454;
    sub_95CC0(v456);
    v457 = (_QWORD *)v1466;
  }
  if ( !v457 )
  {
    v1261 = a1[11];
    v1203 = 230LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1261;
    v1262 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1262;
    v1263 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1263;
    goto LABEL_1352;
  }
  v1467 = v457;
  v458 = PyDict_SetItem(v448, *(_QWORD *)&qword_384D6E0, v457);
  LODWORD(v457) = (_DWORD)v1467;
  if ( v458 )
  {
    v29 = (*v1467)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1467);
    v1258 = a1[11];
    v1203 = 231LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1258;
    v1259 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1259;
    v1260 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1260;
    goto LABEL_1352;
  }
  v29 = (*v1467)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1467);
  v459 = sub_CB210(qword_384F358);
  v460 = sub_C2AC0(
           (int)sub_1CC49A0,
           qword_384D6E8,
           qword_384F360,
           qword_390DA50,
           0,
           0,
           v459,
           qword_390DC08,
           0LL,
           0LL,
           0LL);
  *(_DWORD *)(v450 + 108) = 234;
  v1468 = (_QWORD *)v460;
  v461 = sub_C0FA0(a1, &PyProperty_Type, v460);
  v456 = v1468;
  v457 = (_QWORD *)v461;
  v29 = (*v1468)-- == 1LL;
  if ( v29 )
  {
    v1469 = v461;
    sub_95CC0(v456);
    v457 = (_QWORD *)v1469;
  }
  if ( !v457 )
  {
    v1255 = a1[11];
    v1203 = 234LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1255;
    v1256 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1256;
    v1257 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1257;
    goto LABEL_1352;
  }
  v1470 = v457;
  v462 = PyDict_SetItem(v448, *(_QWORD *)&qword_384D6E8, v457);
  LODWORD(v457) = (_DWORD)v1470;
  if ( v462 )
  {
    v29 = (*v1470)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1470);
    v1252 = a1[11];
    v1203 = 235LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1252;
    v1253 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1253;
    v1254 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1254;
    goto LABEL_1352;
  }
  v29 = (*v1470)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1470);
  v463 = sub_CB210(qword_384F270);
  v464 = sub_C2AC0(
           (int)sub_1CC4720,
           qword_384D6F0,
           qword_384F368,
           qword_390DA58,
           0,
           0,
           v463,
           qword_390DC08,
           0LL,
           0LL,
           0LL);
  *(_DWORD *)(v450 + 108) = 238;
  v1471 = (_QWORD *)v464;
  v465 = sub_C0FA0(a1, &PyProperty_Type, v464);
  v456 = v1471;
  v457 = (_QWORD *)v465;
  v29 = (*v1471)-- == 1LL;
  if ( v29 )
  {
    v1472 = v465;
    sub_95CC0(v456);
    v457 = (_QWORD *)v1472;
  }
  if ( !v457 )
  {
    v1249 = a1[11];
    v1203 = 238LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1249;
    v1250 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1250;
    v1251 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1251;
    goto LABEL_1352;
  }
  v1473 = v457;
  v466 = PyDict_SetItem(v448, *(_QWORD *)&qword_384D6F0, v457);
  LODWORD(v457) = (_DWORD)v1473;
  if ( v466 )
  {
    v29 = (*v1473)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1473);
    v1246 = a1[11];
    v1203 = 239LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1246;
    v1247 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1247;
    v1248 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1248;
    goto LABEL_1352;
  }
  v29 = (*v1473)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1473);
  v467 = sub_CB210(qword_384F358);
  v468 = sub_C2AC0(
           (int)sub_1CC44A0,
           qword_384D6F8,
           qword_384F370,
           qword_390DA60,
           0,
           0,
           v467,
           qword_390DC08,
           0LL,
           0LL,
           0LL);
  *(_DWORD *)(v450 + 108) = 242;
  v1474 = (_QWORD *)v468;
  v469 = sub_C0FA0(a1, &PyProperty_Type, v468);
  v456 = v1474;
  v457 = (_QWORD *)v469;
  v29 = (*v1474)-- == 1LL;
  if ( v29 )
  {
    v1475 = v469;
    sub_95CC0(v456);
    v457 = (_QWORD *)v1475;
  }
  if ( !v457 )
  {
    v1243 = a1[11];
    v1203 = 242LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1243;
    v1244 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1244;
    v1245 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1245;
    goto LABEL_1352;
  }
  v1476 = v457;
  v470 = PyDict_SetItem(v448, *(_QWORD *)&qword_384D6F8, v457);
  LODWORD(v457) = (_DWORD)v1476;
  if ( v470 )
  {
    v29 = (*v1476)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1476);
    v1240 = a1[11];
    v1203 = 243LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1240;
    v1241 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1241;
    v1242 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1242;
    goto LABEL_1352;
  }
  v29 = (*v1476)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1476);
  v471 = sub_CB210(qword_384F358);
  v472 = sub_C2AC0(
           (int)sub_1CC4220,
           qword_384D700,
           qword_384F378,
           qword_390DA68,
           0,
           0,
           v471,
           qword_390DC08,
           0LL,
           0LL,
           0LL);
  *(_DWORD *)(v450 + 108) = 246;
  v1477 = (_QWORD *)v472;
  v473 = sub_C0FA0(a1, &PyProperty_Type, v472);
  v456 = v1477;
  v457 = (_QWORD *)v473;
  v29 = (*v1477)-- == 1LL;
  if ( v29 )
  {
    v1478 = v473;
    sub_95CC0(v456);
    v457 = (_QWORD *)v1478;
  }
  if ( !v457 )
  {
    v1237 = a1[11];
    v1203 = 246LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1237;
    v1238 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1238;
    v1239 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1239;
    goto LABEL_1352;
  }
  v1479 = v457;
  v474 = PyDict_SetItem(v448, *(_QWORD *)&qword_384D700, v457);
  LODWORD(v457) = (_DWORD)v1479;
  if ( v474 )
  {
    v29 = (*v1479)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1479);
    v1234 = a1[11];
    v1203 = 247LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1234;
    v1235 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1235;
    v1236 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1236;
    goto LABEL_1352;
  }
  v29 = (*v1479)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1479);
  v475 = sub_CB210(qword_384F358);
  v476 = sub_C2AC0(
           (int)sub_1CC3FA0,
           qword_384D708,
           qword_384F380,
           qword_390DA70,
           0,
           0,
           v475,
           qword_390DC08,
           0LL,
           0LL,
           0LL);
  *(_DWORD *)(v450 + 108) = 250;
  v1480 = (_QWORD *)v476;
  v477 = sub_C0FA0(a1, &PyProperty_Type, v476);
  v456 = v1480;
  v457 = (_QWORD *)v477;
  v29 = (*v1480)-- == 1LL;
  if ( v29 )
  {
    v1481 = v477;
    sub_95CC0(v456);
    v457 = (_QWORD *)v1481;
  }
  if ( !v457 )
  {
    v1231 = a1[11];
    v1203 = 250LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1231;
    v1232 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1232;
    v1233 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1233;
    goto LABEL_1352;
  }
  v1482 = v457;
  v478 = PyDict_SetItem(v448, *(_QWORD *)&qword_384D708, v457);
  LODWORD(v457) = (_DWORD)v1482;
  if ( v478 )
  {
    v29 = (*v1482)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1482);
    v1228 = a1[11];
    v1203 = 251LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1228;
    v1229 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1229;
    v1230 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1230;
    goto LABEL_1352;
  }
  v29 = (*v1482)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1482);
  v479 = sub_CB210(qword_384F358);
  v480 = sub_C2AC0(
           (int)sub_1CC3D20,
           qword_384D710,
           qword_384F388,
           qword_390DA78,
           0,
           0,
           v479,
           qword_390DC08,
           0LL,
           0LL,
           0LL);
  *(_DWORD *)(v450 + 108) = 254;
  v1483 = (_QWORD *)v480;
  v481 = sub_C0FA0(a1, &PyProperty_Type, v480);
  v456 = v1483;
  v457 = (_QWORD *)v481;
  v29 = (*v1483)-- == 1LL;
  if ( v29 )
  {
    v1484 = v481;
    sub_95CC0(v456);
    v457 = (_QWORD *)v1484;
  }
  if ( !v457 )
  {
    v1225 = a1[11];
    v1203 = 254LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1225;
    v1226 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1226;
    v1227 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1227;
    goto LABEL_1352;
  }
  v1485 = v457;
  v482 = PyDict_SetItem(v448, *(_QWORD *)&qword_384D710, v457);
  LODWORD(v457) = (_DWORD)v1485;
  if ( v482 )
  {
    v29 = (*v1485)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1485);
    v1222 = a1[11];
    v1203 = 255LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1222;
    v1223 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1223;
    v1224 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1224;
    goto LABEL_1352;
  }
  v29 = (*v1485)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1485);
  v483 = sub_CB210(qword_384F270);
  v484 = sub_C2AC0(
           (int)sub_1CC3AA0,
           qword_384D718,
           qword_384F390,
           qword_390DA80,
           0,
           0,
           v483,
           qword_390DC08,
           0LL,
           0LL,
           0LL);
  *(_DWORD *)(v450 + 108) = 258;
  v1486 = (_QWORD *)v484;
  v485 = sub_C0FA0(a1, &PyProperty_Type, v484);
  v456 = v1486;
  v457 = (_QWORD *)v485;
  v29 = (*v1486)-- == 1LL;
  if ( v29 )
  {
    v1487 = v485;
    sub_95CC0(v456);
    v457 = (_QWORD *)v1487;
  }
  if ( !v457 )
  {
    v1219 = a1[11];
    v1203 = 258LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1219;
    v1220 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1220;
    v1221 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1221;
    goto LABEL_1352;
  }
  v1488 = v457;
  v486 = PyDict_SetItem(v448, *(_QWORD *)&qword_384D718, v457);
  LODWORD(v457) = (_DWORD)v1488;
  if ( v486 )
  {
    v29 = (*v1488)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1488);
    v1216 = a1[11];
    v1203 = 259LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1216;
    v1217 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1217;
    v1218 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1218;
    goto LABEL_1352;
  }
  v29 = (*v1488)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1488);
  v487 = sub_CB210(qword_384F398);
  v488 = sub_C2AC0(
           (int)sub_1CC3820,
           qword_384D720,
           qword_384F3A0,
           qword_390DA88,
           0,
           0,
           v487,
           qword_390DC08,
           0LL,
           0LL,
           0LL);
  *(_DWORD *)(v450 + 108) = 262;
  v1489 = (_QWORD *)v488;
  v489 = sub_C0FA0(a1, &PyProperty_Type, v488);
  LODWORD(v457) = (_DWORD)v1489;
  v490 = (_QWORD *)v489;
  v29 = (*v1489)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1489);
  if ( !v490 )
  {
    v1213 = a1[11];
    v1203 = 262LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1213;
    v1214 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1214;
    v1215 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1215;
LABEL_1352:
    v1206 = v1549;
    if ( v1549 )
    {
      if ( v1549[3] != v450 )
      {
        v1207 = sub_CC260(v450, v1203);
        v1208 = v1549;
        *(_QWORD *)(v1207 + 16) = v1206;
        v1209 = v1207;
        ++*v1206;
        if ( v1208 )
        {
          v29 = (*v1208)-- == 1LL;
          if ( v29 )
            sub_95CC0(v1208);
        }
        v1549 = (_QWORD *)v1209;
      }
    }
    else
    {
      v1210 = sub_CC260(v450, v1203);
      v1211 = v1549;
      v1212 = v1210;
      if ( v1549 )
      {
        v29 = (*v1549)-- == 1LL;
        if ( v29 )
          sub_95CC0(v1211);
      }
      v1549 = (_QWORD *)v1212;
    }
    sub_B31D0(v450, (unsigned int)"o", 0, v455, (_DWORD)v457, (_DWORD)v456);
    sub_D5FD0(a1 + 3);
    goto LABEL_1342;
  }
  if ( (unsigned int)PyDict_SetItem(v448, *(_QWORD *)&qword_384D720, v490) )
  {
    v29 = (*v490)-- == 1LL;
    if ( v29 )
      sub_95CC0(v490);
    v1202 = a1[11];
    a1[11] = 0LL;
    v1203 = 263LL;
    v1548.m128i_i64[0] = v1202;
    v1204 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1204;
    v1205 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1205;
    goto LABEL_1352;
  }
  v29 = (*v490)-- == 1LL;
  if ( v29 )
    sub_95CC0(v490);
  v1490 = a1 + 3;
  sub_D5FD0(a1 + 3);
  v491 = (_QWORD *)qword_384EF50;
  v492 = PyTuple_New(3LL);
  ++*v491;
  v493 = (_QWORD *)v492;
  *(_QWORD *)(v492 + 24) = v491;
  v494 = qword_384F8A0;
  ++*(_QWORD *)qword_384F8A0;
  v493[4] = v494;
  ++*v448;
  v493[5] = v448;
  *(_DWORD *)(v12 + 108) = 214;
  v495 = sub_13F2D0(a1, &PyType_Type, v493, v1451);
  v29 = (*v493)-- == 1LL;
  v496 = (_QWORD *)v495;
  if ( v29 )
    sub_95CC0(v493);
  if ( !v496 )
  {
    v1198 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1198;
    v1199 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1199;
    v1200 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1200;
LABEL_1342:
    v1201 = v1548;
    v1548 = 0uLL;
    v758 = v1549;
    v1549 = 0LL;
    v29 = (*v448)-- == 1LL;
    if ( v29 )
      sub_95CC0(v448);
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v1451)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1451);
    v29 = (*v448)-- == 1LL;
    if ( v29 )
      sub_95CC0(v448);
    v1548 = v1201;
    v760 = 214;
    v1549 = v758;
    goto LABEL_838;
  }
  ++*v496;
  v29 = (*v448)-- == 1LL;
  if ( v29 )
    sub_95CC0(v448);
  v29 = (*v496)-- == 1LL;
  if ( v29 )
    sub_95CC0(v496);
  v497 = qword_384EF50;
  v498 = qword_390DC10;
  sub_D6010(qword_390DC10, qword_384EF50, v496);
  v499 = v1451;
  v1452 = *v1451;
  *v499 = v1452 - 1;
  if ( v1452 == 1 )
  {
    v498 = (__int64)v499;
    sub_95CC0(v499);
  }
  v29 = (*v448)-- == 1LL;
  if ( v29 )
  {
    v498 = (__int64)v448;
    sub_95CC0(v448);
  }
  v1453 = (_QWORD *)PyDict_New(v498, v497);
  v500 = (_QWORD *)PyDict_New(v498, v497);
  v501 = qword_384F320;
  v502 = qword_384F328;
  ++*v500;
  v503 = v500;
  PyDict_SetItem(v500, v502, v501);
  PyDict_SetItem(v503, qword_384F338, qword_384EDC8);
  v504 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CC3420,
                     qword_384F340,
                     qword_384F3A8,
                     qword_390DA90,
                     0,
                     0,
                     0LL,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v503, *(_QWORD *)&qword_384F340, v504);
  v29 = (*v504)-- == 1LL;
  if ( v29 )
    sub_95CC0(v504);
  v505 = sub_CB210(qword_384F3B0);
  v506 = (_QWORD *)sub_C2AC0(
                     (int)sub_1D02040,
                     qword_384D7D0,
                     qword_384F3B8,
                     qword_390DA98,
                     0,
                     0,
                     v505,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v503, *(_QWORD *)&qword_384D7D0, v506);
  v29 = (*v506)-- == 1LL;
  if ( v29 )
    sub_95CC0(v506);
  v507 = sub_CB210(qword_384F3C0);
  v508 = (_QWORD *)sub_C2AC0(
                     (int)sub_1D01140,
                     qword_384D838,
                     qword_384F3C8,
                     qword_390DAA0,
                     0,
                     0,
                     v507,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v503, *(_QWORD *)&qword_384D838, v508);
  v29 = (*v508)-- == 1LL;
  if ( v29 )
    sub_95CC0(v508);
  v509 = *(_QWORD **)&qword_384F3D0;
  v510 = sub_CB210(qword_384F3D8);
  ++*v509;
  v511 = (_QWORD *)sub_C2AC0(
                     (int)sub_1D00C40,
                     qword_384D830,
                     qword_384F3E0,
                     qword_390DAA8,
                     (int)v509,
                     0,
                     v510,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v503, *(_QWORD *)&qword_384D830, v511);
  v29 = (*v511)-- == 1LL;
  if ( v29 )
    sub_95CC0(v511);
  v512 = *(_QWORD **)&qword_384F3D0;
  v513 = sub_CB210(qword_384F3E8);
  ++*v512;
  v514 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CC2C60,
                     qword_384D860,
                     qword_384F3F0,
                     qword_390DAB0,
                     (int)v512,
                     0,
                     v513,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v503, *(_QWORD *)&qword_384D860, v514);
  v29 = (*v514)-- == 1LL;
  if ( v29 )
    sub_95CC0(v514);
  v515 = sub_CB210(qword_384F398);
  v516 = (_QWORD *)sub_C2AC0(
                     (int)sub_1D14760,
                     qword_384EF68,
                     qword_384F3F8,
                     qword_390DAB8,
                     0,
                     0,
                     v515,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v503, *(_QWORD *)&qword_384EF68, v516);
  v29 = (*v516)-- == 1LL;
  if ( v29 )
    sub_95CC0(v516);
  v517 = (_QWORD *)qword_384EDC8;
  v518 = PyTuple_New(3LL);
  ++*v517;
  v519 = (_QWORD *)v518;
  *(_QWORD *)(v518 + 24) = v517;
  v520 = qword_384F8A0;
  v1492 = v519;
  ++*(_QWORD *)qword_384F8A0;
  v519[4] = v520;
  ++*v503;
  v519[5] = v503;
  *(_DWORD *)(v12 + 108) = 267;
  v521 = (_QWORD *)sub_13F2D0(a1, &PyType_Type, v519, v1453);
  v29 = (*v1492)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1492);
  if ( !v521 )
  {
    v1196 = a1[11];
    v1197 = a1[12];
    a1[11] = 0LL;
    v758 = (_QWORD *)a1[13];
    a1[12] = 0LL;
    a1[13] = 0LL;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v503)-- == 1LL;
    if ( v29 )
      sub_95CC0(v503);
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v1453)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1453);
    v29 = (*v503)-- == 1LL;
    if ( v29 )
      sub_95CC0(v503);
    v1548.m128i_i64[0] = v1196;
    v760 = 267;
    v1548.m128i_i64[1] = v1197;
    v1549 = v758;
    goto LABEL_838;
  }
  ++*v521;
  v29 = (*v503)-- == 1LL;
  if ( v29 )
    sub_95CC0(v503);
  v29 = (*v521)-- == 1LL;
  if ( v29 )
    sub_95CC0(v521);
  v522 = qword_384EDC8;
  v523 = qword_390DC10;
  sub_D6010(qword_390DC10, qword_384EDC8, v521);
  v524 = v1453;
  v1454 = *v1453;
  *v524 = v1454 - 1;
  if ( v1454 == 1 )
  {
    v523 = (__int64)v524;
    sub_95CC0(v524);
  }
  v29 = (*v503)-- == 1LL;
  if ( v29 )
  {
    v523 = (__int64)v503;
    sub_95CC0(v503);
  }
  v1455 = (_QWORD *)PyDict_New(v523, v522);
  v525 = (_QWORD *)PyDict_New(v523, v522);
  v526 = qword_384F320;
  v527 = qword_384F328;
  ++*v525;
  v528 = v525;
  PyDict_SetItem(v525, v527, v526);
  PyDict_SetItem(v528, qword_384F338, qword_384EEC0);
  v529 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CC29A0,
                     qword_384F340,
                     qword_384F400,
                     qword_390DAC0,
                     0,
                     0,
                     0LL,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v528, *(_QWORD *)&qword_384F340, v529);
  v29 = (*v529)-- == 1LL;
  if ( v29 )
    sub_95CC0(v529);
  v530 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CCDC20,
                     qword_384EEC8,
                     qword_384F408,
                     qword_390DAC8,
                     0,
                     0,
                     0LL,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v528, *(_QWORD *)&qword_384EEC8, v530);
  v29 = (*v530)-- == 1LL;
  if ( v29 )
    sub_95CC0(v530);
  v531 = (_QWORD *)sub_C2AC0(
                     (int)sub_1D00740,
                     qword_384D8D8,
                     qword_384F410,
                     qword_390DAD0,
                     0,
                     0,
                     0LL,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v528, *(_QWORD *)&qword_384D8D8, v531);
  v29 = (*v531)-- == 1LL;
  if ( v29 )
    sub_95CC0(v531);
  v532 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CD3480,
                     qword_384D930,
                     qword_384F418,
                     qword_390DAD8,
                     0,
                     0,
                     0LL,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v528, *(_QWORD *)&qword_384D930, v532);
  v29 = (*v532)-- == 1LL;
  if ( v29 )
    sub_95CC0(v532);
  v533 = (_QWORD *)sub_C2AC0(
                     (int)sub_1D12C40,
                     qword_384EED0,
                     qword_384F420,
                     qword_390DAE0,
                     0,
                     0,
                     0LL,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v528, *(_QWORD *)&qword_384EED0, v533);
  v29 = (*v533)-- == 1LL;
  if ( v29 )
    sub_95CC0(v533);
  v534 = (_QWORD *)qword_384EEC0;
  v535 = PyTuple_New(3LL);
  ++*v534;
  v536 = (_QWORD *)v535;
  *(_QWORD *)(v535 + 24) = v534;
  v537 = qword_384F8A0;
  v1493 = v536;
  ++*(_QWORD *)qword_384F8A0;
  v536[4] = v537;
  ++*v528;
  v536[5] = v528;
  *(_DWORD *)(v12 + 108) = 314;
  v538 = (_QWORD *)sub_13F2D0(a1, &PyType_Type, v536, v1455);
  v29 = (*v1493)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1493);
  if ( !v538 )
  {
    v1194 = a1[11];
    v1195 = a1[12];
    a1[11] = 0LL;
    v758 = (_QWORD *)a1[13];
    a1[12] = 0LL;
    a1[13] = 0LL;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v528)-- == 1LL;
    if ( v29 )
      sub_95CC0(v528);
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v1455)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1455);
    v29 = (*v528)-- == 1LL;
    if ( v29 )
      sub_95CC0(v528);
    v1548.m128i_i64[0] = v1194;
    v760 = 314;
    v1548.m128i_i64[1] = v1195;
    v1549 = v758;
    goto LABEL_838;
  }
  ++*v538;
  v29 = (*v528)-- == 1LL;
  if ( v29 )
    sub_95CC0(v528);
  v29 = (*v538)-- == 1LL;
  if ( v29 )
    sub_95CC0(v538);
  v539 = qword_384EEC0;
  v540 = qword_390DC10;
  sub_D6010(qword_390DC10, qword_384EEC0, v538);
  v541 = v1455;
  v1456 = *v1455;
  *v541 = v1456 - 1;
  if ( v1456 == 1 )
  {
    v540 = (__int64)v541;
    sub_95CC0(v541);
  }
  v29 = (*v528)-- == 1LL;
  if ( v29 )
  {
    v540 = (__int64)v528;
    sub_95CC0(v528);
  }
  v1457 = (_QWORD *)PyDict_New(v540, v539);
  v542 = (_QWORD *)PyDict_New(v540, v539);
  v543 = qword_384F320;
  v544 = qword_384F328;
  ++*v542;
  v545 = v542;
  PyDict_SetItem(v542, v544, v543);
  PyDict_SetItem(v545, qword_384F008, qword_384F428);
  PyDict_SetItem(v545, qword_384F338, qword_384EFA8);
  v546 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CFFDA0,
                     qword_384F340,
                     qword_384F430,
                     qword_390DAE8,
                     0,
                     0,
                     0LL,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  PyDict_SetItem(v545, *(_QWORD *)&qword_384F340, v546);
  v29 = (*v546)-- == 1LL;
  if ( v29 )
    sub_95CC0(v546);
  v547 = sub_CB210(qword_384F438);
  v548 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CCCDF0,
                     qword_384EA98,
                     qword_384F440,
                     qword_390DAF0,
                     0,
                     0,
                     v547,
                     qword_390DC08,
                     qword_384D9C0,
                     0LL,
                     0LL);
  PyDict_SetItem(v545, *(_QWORD *)&qword_384EA98, v548);
  v29 = (*v548)-- == 1LL;
  if ( v29 )
    sub_95CC0(v548);
  v549 = sub_CB210(qword_384F448);
  v550 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CE5630,
                     qword_384EDF8,
                     qword_384F450,
                     qword_390DAF8,
                     0,
                     0,
                     v549,
                     qword_390DC08,
                     qword_384D9C8,
                     0LL,
                     0LL);
  PyDict_SetItem(v545, *(_QWORD *)&qword_384EDF8, v550);
  v29 = (*v550)-- == 1LL;
  if ( v29 )
    sub_95CC0(v550);
  v551 = sub_CB210(qword_384F318);
  v552 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CC2700,
                     qword_384EE00,
                     qword_384F458,
                     qword_390DB00,
                     0,
                     0,
                     v551,
                     qword_390DC08,
                     qword_384D9D0,
                     0LL,
                     0LL);
  PyDict_SetItem(v545, *(_QWORD *)&qword_384EE00, v552);
  v29 = (*v552)-- == 1LL;
  if ( v29 )
    sub_95CC0(v552);
  v553 = sub_CB210(qword_384F318);
  v554 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CC23B0,
                     qword_384D9D8,
                     qword_384F460,
                     qword_390DB08,
                     0,
                     0,
                     v553,
                     qword_390DC08,
                     qword_384D9E8,
                     0LL,
                     0LL);
  PyDict_SetItem(v545, *(_QWORD *)&qword_384D9D8, v554);
  v29 = (*v554)-- == 1LL;
  if ( v29 )
    sub_95CC0(v554);
  v555 = (_QWORD *)qword_384EFA8;
  v556 = PyTuple_New(3LL);
  ++*v555;
  v557 = (_QWORD *)v556;
  *(_QWORD *)(v556 + 24) = v555;
  v558 = qword_384F8A0;
  v1494 = v557;
  ++*(_QWORD *)qword_384F8A0;
  v557[4] = v558;
  ++*v545;
  v557[5] = v545;
  *(_DWORD *)(v12 + 108) = 347;
  v559 = (_QWORD *)sub_13F2D0(a1, &PyType_Type, v557, v1457);
  v29 = (*v1494)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1494);
  if ( !v559 )
  {
    v1192 = a1[11];
    v1193 = a1[12];
    a1[11] = 0LL;
    v758 = (_QWORD *)a1[13];
    a1[12] = 0LL;
    a1[13] = 0LL;
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v545)-- == 1LL;
    if ( v29 )
      sub_95CC0(v545);
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v1457)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1457);
    v29 = (*v545)-- == 1LL;
    if ( v29 )
      sub_95CC0(v545);
    v1548.m128i_i64[0] = v1192;
    v760 = 347;
    v1548.m128i_i64[1] = v1193;
    v1549 = v758;
    goto LABEL_838;
  }
  ++*v559;
  v29 = (*v545)-- == 1LL;
  if ( v29 )
    sub_95CC0(v545);
  v29 = (*v559)-- == 1LL;
  if ( v29 )
    sub_95CC0(v559);
  v560 = qword_384EFA8;
  v561 = qword_390DC10;
  sub_D6010(qword_390DC10, qword_384EFA8, v559);
  v562 = v1457;
  v1458 = *v1457;
  *v562 = v1458 - 1;
  if ( v1458 == 1 )
  {
    v561 = (__int64)v562;
    sub_95CC0(v562);
  }
  v29 = (*v545)-- == 1LL;
  if ( v29 )
  {
    v561 = (__int64)v545;
    sub_95CC0(v545);
  }
  v1498 = (_QWORD *)PyDict_New(v561, v560);
  v563 = (_QWORD *)PyDict_New(v561, v560);
  v564 = qword_384F320;
  v565 = qword_384F328;
  ++*v563;
  v566 = v563;
  v1459 = v563;
  PyDict_SetItem(v563, v565, v564);
  PyDict_SetItem(v566, qword_384F338, qword_384E770);
  v567 = sub_B2750(a1, qword_390E008, qword_390DC08, 8LL);
  v1495 = v567;
  v568 = a1[3];
  a1[3] = v567;
  if ( v568 )
    *(_QWORD *)(v567 + 24) = v568;
  ++*(_QWORD *)v567;
  *(_BYTE *)(v567 + 116) = 1;
  v569 = *(_QWORD **)&qword_384F468;
  v570 = qword_384F470;
  v571 = sub_1C68820();
  if ( !v571 )
  {
    v1135 = 387;
    sub_C5700(a1, &v1548, qword_384F040);
    goto LABEL_1234;
  }
  *(_QWORD *)v1509 = v571;
  v572 = (_QWORD *)PyDict_NewPresized(4LL);
  PyDict_SetItem(v572, v570, *(_QWORD *)v1509);
  v573 = qword_384DA40;
  v574 = sub_1C689A0();
  if ( !v574 )
  {
    sub_C5700(a1, &v1548, qword_384F088);
LABEL_1316:
    v29 = (*v572)-- == 1LL;
    v1135 = 387;
    if ( !v29 )
      goto LABEL_1234;
    goto LABEL_1285;
  }
  v575 = sub_13EC40(a1, v574, &PyUnicode_Type);
  v578 = v575;
  if ( !v575 )
  {
    v1189 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1189;
    v1190 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1190;
    v1191 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1191;
    goto LABEL_1316;
  }
  v1510 = (_QWORD *)v575;
  PyDict_SetItem(v572, v573, v575);
  v29 = (*v1510)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1510);
  PyDict_SetItem(v572, qword_384D9F0, &PyFloat_Type);
  PyDict_SetItem(v572, qword_384D9F8, &PyFloat_Type);
  ++*v569;
  v579 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CCD4A0,
                     qword_384F340,
                     qword_384F478,
                     qword_390DB10,
                     (int)v569,
                     0,
                     (__int64)v572,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  if ( (unsigned int)PyDict_SetItem(v1459, *(_QWORD *)&qword_384F340, v579) )
  {
    v29 = (*v579)-- == 1LL;
    if ( v29 )
      sub_95CC0(v579);
    v1186 = a1[11];
    v1135 = 387;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1186;
    v1187 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1187;
    v1188 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1188;
    goto LABEL_1234;
  }
  v29 = (*v579)-- == 1LL;
  if ( v29 )
    sub_95CC0(v579);
  v580 = qword_384DAA0;
  v1511 = (_QWORD *)qword_384F480;
  v581 = sub_1C687A0();
  if ( !v581 )
  {
    v1135 = 403;
    sub_C5700(a1, &v1548, qword_384DAD0);
    goto LABEL_1234;
  }
  v582 = (_QWORD *)sub_B00D0(a1, v581, qword_384D990);
  if ( !v582 )
    goto LABEL_1301;
  v583 = (_QWORD *)PyDict_NewPresized(3LL);
  PyDict_SetItem(v583, v580, v582);
  v29 = (*v582)-- == 1LL;
  if ( v29 )
    sub_95CC0(v582);
  v584 = qword_384F488;
  v585 = sub_1C673F0();
  if ( !v585 )
    goto LABEL_1309;
  v586 = sub_13EC40(a1, v585, qword_384F490);
  v578 = v586;
  if ( !v586 )
  {
LABEL_1310:
    v1183 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1183;
    v1184 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1184;
    v1185 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1185;
    goto LABEL_1305;
  }
  v1517 = (_QWORD *)v586;
  PyDict_SetItem(v583, v584, v586);
  v29 = (*v1517)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1517);
  v1518 = qword_384F498;
  v587 = sub_1C673F0();
  if ( !v587 )
  {
LABEL_1309:
    sub_C5700(a1, &v1548, qword_384F090);
    goto LABEL_1305;
  }
  v588 = sub_1C687A0();
  if ( !v588 )
  {
    sub_C5700(a1, &v1548, qword_384DAD0);
    goto LABEL_1305;
  }
  v589 = sub_B00D0(a1, v588, qword_384D990);
  if ( !v589 )
    goto LABEL_1310;
  v1524 = v589;
  v590 = (_QWORD *)PyTuple_New(2LL);
  v590[3] = v1524;
  v591 = sub_1C673F0();
  if ( !v591 )
  {
    sub_C5700(a1, &v1548, qword_384F090);
LABEL_1303:
    v29 = (*v590)-- == 1LL;
    if ( v29 )
      sub_95CC0(v590);
LABEL_1305:
    v29 = (*v583)-- == 1LL;
    v1135 = 403;
    if ( !v29 )
      goto LABEL_1234;
    goto LABEL_1247;
  }
  v592 = sub_13EC40(a1, v591, qword_384F490);
  if ( !v592 )
  {
    v1180 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1180;
    v1181 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1181;
    v1182 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1182;
    goto LABEL_1303;
  }
  v590[4] = v592;
  v593 = sub_13EC40(a1, v587, v590);
  v29 = (*v590)-- == 1LL;
  v594 = (_QWORD *)v593;
  if ( v29 )
    sub_95CC0(v590);
  if ( !v594 )
    goto LABEL_1310;
  PyDict_SetItem(v583, v1518, v594);
  v29 = (*v594)-- == 1LL;
  if ( v29 )
    sub_95CC0(v594);
  v595 = qword_384F4A0;
  v596 = qword_384DAC8;
  v597 = qword_390DB18;
  ++*v1511;
  v598 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CD55A0,
                     v596,
                     v595,
                     v597,
                     (int)v1511,
                     0,
                     (__int64)v583,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  if ( (unsigned int)PyDict_SetItem(v1459, *(_QWORD *)&qword_384DAC8, v598) )
  {
    v29 = (*v598)-- == 1LL;
    if ( v29 )
      sub_95CC0(v598);
LABEL_1301:
    v1177 = a1[11];
    v1135 = 403;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1177;
    v1178 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1178;
    v1179 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1179;
    goto LABEL_1234;
  }
  v29 = (*v598)-- == 1LL;
  if ( v29 )
    sub_95CC0(v598);
  v599 = qword_384DBA8;
  v600 = sub_1C689A0();
  if ( !v600 )
  {
    v1135 = 421;
    sub_C5700(a1, &v1548, qword_384F088);
    goto LABEL_1234;
  }
  v601 = (_QWORD *)sub_13EC40(a1, v600, &PyFloat_Type);
  if ( !v601 )
    goto LABEL_1293;
  v572 = (_QWORD *)PyDict_NewPresized(2LL);
  PyDict_SetItem(v572, v599, v601);
  v29 = (*v601)-- == 1LL;
  if ( v29 )
    sub_95CC0(v601);
  v602 = qword_384F498;
  v603 = sub_1C689A0();
  if ( !v603 )
  {
    sub_C5700(a1, &v1548, qword_384F088);
    goto LABEL_1295;
  }
  v604 = sub_13EC40(a1, v603, &PyFloat_Type);
  v605 = (_QWORD *)v604;
  if ( !v604 )
  {
    v1174 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1174;
    v1175 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1175;
    v1176 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1176;
LABEL_1295:
    v29 = (*v572)-- == 1LL;
    v1135 = 421;
    if ( !v29 )
      goto LABEL_1234;
    goto LABEL_1285;
  }
  PyDict_SetItem(v572, v602, v604);
  v29 = (*v605)-- == 1LL;
  if ( v29 )
    sub_95CC0(v605);
  v606 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CC74E0,
                     qword_384DB88,
                     qword_384F4A8,
                     qword_390DB20,
                     0,
                     0,
                     (__int64)v572,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  if ( (unsigned int)PyDict_SetItem(v1459, *(_QWORD *)&qword_384DB88, v606) )
  {
    v29 = (*v606)-- == 1LL;
    if ( v29 )
      sub_95CC0(v606);
LABEL_1293:
    v1171 = a1[11];
    v1135 = 421;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1171;
    v1172 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1172;
    v1173 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1173;
    goto LABEL_1234;
  }
  v29 = (*v606)-- == 1LL;
  if ( v29 )
    sub_95CC0(v606);
  v607 = qword_384E860;
  v608 = sub_1C687A0();
  if ( !v608 )
  {
    v1135 = 426;
    sub_C5700(a1, &v1548, qword_384DAD0);
    goto LABEL_1234;
  }
  v609 = (_QWORD *)sub_B00D0(a1, v608, qword_384D990);
  if ( !v609 )
    goto LABEL_1280;
  v572 = (_QWORD *)PyDict_NewPresized(2LL);
  PyDict_SetItem(v572, v607, v609);
  v29 = (*v609)-- == 1LL;
  if ( v29 )
    sub_95CC0(v609);
  *(_QWORD *)v1512 = qword_384F498;
  v610 = sub_1C673F0();
  if ( !v610 )
  {
    sub_C5700(a1, &v1548, qword_384F090);
    goto LABEL_1284;
  }
  v611 = sub_1C687A0();
  if ( !v611 )
  {
    sub_C5700(a1, &v1548, qword_384DAD0);
    goto LABEL_1284;
  }
  v612 = sub_B00D0(a1, v611, qword_384D990);
  if ( !v612 )
  {
LABEL_1286:
    v1165 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1165;
    v1166 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1166;
    v1167 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1167;
    goto LABEL_1284;
  }
  v1519 = v612;
  v613 = (_QWORD *)PyTuple_New(2LL);
  v613[3] = v1519;
  v614 = sub_1C673F0();
  if ( !v614 )
  {
    sub_C5700(a1, &v1548, qword_384F090);
    goto LABEL_1282;
  }
  v615 = sub_13EC40(a1, v614, qword_384F490);
  if ( !v615 )
  {
    v1168 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1168;
    v1169 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1169;
    v1170 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1170;
LABEL_1282:
    v29 = (*v613)-- == 1LL;
    if ( v29 )
      sub_95CC0(v613);
LABEL_1284:
    v29 = (*v572)-- == 1LL;
    v1135 = 426;
    if ( !v29 )
      goto LABEL_1234;
LABEL_1285:
    sub_95CC0(v572);
    goto LABEL_1234;
  }
  v613[4] = v615;
  v616 = sub_13EC40(a1, v610, v613);
  v29 = (*v613)-- == 1LL;
  v617 = (_QWORD *)v616;
  if ( v29 )
    sub_95CC0(v613);
  if ( !v617 )
    goto LABEL_1286;
  PyDict_SetItem(v572, *(_QWORD *)v1512, v617);
  v29 = (*v617)-- == 1LL;
  if ( v29 )
    sub_95CC0(v617);
  v618 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CC6580,
                     qword_384DBE0,
                     qword_384F4B0,
                     qword_390DB28,
                     0,
                     0,
                     (__int64)v572,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  if ( (unsigned int)PyDict_SetItem(v1459, *(_QWORD *)&qword_384DBE0, v618) )
  {
    v29 = (*v618)-- == 1LL;
    if ( v29 )
      sub_95CC0(v618);
LABEL_1280:
    v1162 = a1[11];
    v1135 = 426;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1162;
    v1163 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1163;
    v1164 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1164;
    goto LABEL_1234;
  }
  v29 = (*v618)-- == 1LL;
  if ( v29 )
    sub_95CC0(v618);
  v619 = qword_384F4B8;
  v620 = sub_1C687A0();
  if ( !v620 )
  {
    v1135 = 439;
    sub_C5700(a1, &v1548, qword_384DAD0);
    goto LABEL_1234;
  }
  v621 = (_QWORD *)sub_B00D0(a1, v620, qword_384D990);
  if ( !v621 )
    goto LABEL_1260;
  v583 = (_QWORD *)PyDict_NewPresized(4LL);
  PyDict_SetItem(v583, v619, v621);
  v29 = (*v621)-- == 1LL;
  if ( v29 )
    sub_95CC0(v621);
  v622 = qword_384E090;
  v623 = sub_1C689A0();
  if ( !v623 )
  {
    v1135 = 439;
    sub_C5700(a1, &v1548, qword_384F088);
    goto LABEL_1264;
  }
  v624 = sub_1C687A0();
  if ( !v624 )
  {
    v1135 = 439;
    sub_C5700(a1, &v1548, qword_384DAD0);
    goto LABEL_1264;
  }
  v625 = sub_B00D0(a1, v624, qword_384D990);
  v578 = v625;
  if ( !v625 )
    goto LABEL_1277;
  v1513 = (_QWORD *)v625;
  v626 = sub_13EC40(a1, v623, v625);
  v578 = (int)v1513;
  v627 = (_QWORD *)v626;
  v29 = (*v1513)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1513);
  if ( !v627 )
    goto LABEL_1277;
  PyDict_SetItem(v583, v622, v627);
  v29 = (*v627)-- == 1LL;
  if ( v29 )
    sub_95CC0(v627);
  v628 = qword_384F4C0;
  v629 = sub_1C673F0();
  if ( !v629 )
  {
    v1135 = 439;
    sub_C5700(a1, &v1548, qword_384F090);
    goto LABEL_1264;
  }
  v630 = sub_13EC40(a1, v629, qword_384F490);
  v631 = (_QWORD *)v630;
  if ( !v630 )
  {
LABEL_1277:
    v1159 = a1[11];
    v1135 = 439;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1159;
    v1160 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1160;
    v1161 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1161;
    goto LABEL_1264;
  }
  PyDict_SetItem(v583, v628, v630);
  v29 = (*v631)-- == 1LL;
  if ( v29 )
    sub_95CC0(v631);
  *(_QWORD *)v1514 = qword_384F498;
  v1520 = sub_1C673F0();
  if ( !v1520 )
  {
    v1135 = 440;
    sub_C5700(a1, &v1548, qword_384F090);
    goto LABEL_1264;
  }
  v632 = sub_1C687A0();
  if ( !v632 )
  {
    v1135 = 440;
    sub_C5700(a1, &v1548, qword_384DAD0);
    goto LABEL_1264;
  }
  v633 = sub_B00D0(a1, v632, qword_384D990);
  if ( !v633 )
  {
LABEL_1271:
    v1156 = a1[11];
    v1135 = 440;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1156;
    v1157 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1157;
    v1158 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1158;
    goto LABEL_1264;
  }
  v634 = PyTuple_New(2LL);
  *(_QWORD *)(v634 + 24) = v633;
  v635 = (_QWORD *)v634;
  v1525 = sub_1C689A0();
  if ( !v1525 )
  {
    sub_C5700(a1, &v1548, qword_384F088);
LABEL_1262:
    v29 = (*v635)-- == 1LL;
    v1135 = 440;
    if ( v29 )
      sub_95CC0(v635);
LABEL_1264:
    v29 = (*v583)-- == 1LL;
    if ( !v29 )
      goto LABEL_1234;
    goto LABEL_1247;
  }
  v636 = sub_1C68920();
  v637 = v636;
  if ( !v636 )
  {
    sub_C5700(a1, &v1548, qword_384F098);
    goto LABEL_1262;
  }
  v1526 = v636;
  v638 = (_QWORD *)PyTuple_New(2LL);
  ++PyUnicode_Type;
  v638[3] = &PyUnicode_Type;
  v639 = (_QWORD *)sub_1C688A0(2LL, v637);
  if ( !v639 )
  {
    sub_C5700(a1, &v1548, qword_384F0A0);
    v29 = (*v638)-- == 1LL;
    if ( v29 )
      sub_95CC0(v638);
    goto LABEL_1262;
  }
  ++*v639;
  v638[4] = v639;
  v640 = sub_13EC40(a1, v1526, v638);
  v29 = (*v638)-- == 1LL;
  v577 = (_QWORD *)v640;
  if ( v29 )
  {
    v1527 = v640;
    sub_95CC0(v638);
    v577 = (_QWORD *)v1527;
  }
  if ( !v577 )
    goto LABEL_1261;
  v1528 = v577;
  v641 = sub_13EC40(a1, v1525, v577);
  LODWORD(v577) = (_DWORD)v1528;
  v642 = v641;
  v29 = (*v1528)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1528);
  if ( !v642 )
  {
LABEL_1261:
    v1153 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1153;
    v1154 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1154;
    v1155 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1155;
    goto LABEL_1262;
  }
  v635[4] = v642;
  v643 = sub_13EC40(a1, v1520, v635);
  v29 = (*v635)-- == 1LL;
  v644 = (_QWORD *)v643;
  if ( v29 )
    sub_95CC0(v635);
  if ( !v644 )
    goto LABEL_1271;
  PyDict_SetItem(v583, *(_QWORD *)v1514, v644);
  v29 = (*v644)-- == 1LL;
  if ( v29 )
    sub_95CC0(v644);
  v645 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CE0540,
                     qword_384DBE8,
                     qword_384F4C8,
                     qword_390DB30,
                     0,
                     0,
                     (__int64)v583,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  if ( (unsigned int)PyDict_SetItem(v1459, *(_QWORD *)&qword_384DBE8, v645) )
  {
    v29 = (*v645)-- == 1LL;
    if ( v29 )
      sub_95CC0(v645);
LABEL_1260:
    v1150 = a1[11];
    v1135 = 439;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1150;
    v1151 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1151;
    v1152 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1152;
    goto LABEL_1234;
  }
  v29 = (*v645)-- == 1LL;
  if ( v29 )
    sub_95CC0(v645);
  v646 = qword_384F4B8;
  if ( *(_QWORD *)(qword_390DC10 + 24) == qword_390DF78 )
  {
    v647 = qword_390DF70;
  }
  else
  {
    qword_390DF78 = *(_QWORD *)(qword_390DC10 + 24);
    v1149 = (__int64 *)sub_C4A20(qword_390DC10, qword_384F0A8);
    v647 = (__int64)v1149;
    if ( v1149 )
      v647 = *v1149;
    qword_390DF70 = v647;
  }
  if ( !v647 )
  {
    v1148 = (__int64 *)sub_C4A20(qword_384F848, qword_384F0A8);
    if ( !v1148 || (v647 = *v1148) == 0 )
    {
      v1135 = 500;
      sub_C5700(a1, &v1548, qword_384F0A8);
      goto LABEL_1234;
    }
  }
  v648 = (_QWORD *)sub_13EC40(a1, v647, qword_384F4D0);
  if ( !v648 )
    goto LABEL_1233;
  v583 = (_QWORD *)PyDict_NewPresized(2LL);
  PyDict_SetItem(v583, v646, v648);
  v29 = (*v648)-- == 1LL;
  if ( v29 )
    sub_95CC0(v648);
  *(_QWORD *)v1515 = qword_384F498;
  v649 = sub_1C689A0();
  if ( !v649 )
  {
    sub_C5700(a1, &v1548, qword_384F088);
    goto LABEL_1246;
  }
  v650 = sub_1C68920();
  v651 = v650;
  if ( !v650 )
  {
    sub_C5700(a1, &v1548, qword_384F098);
    goto LABEL_1246;
  }
  v1521 = v650;
  v652 = (_QWORD *)PyTuple_New(2LL);
  ++PyUnicode_Type;
  v652[3] = &PyUnicode_Type;
  v653 = (_QWORD *)sub_1C688A0(2LL, v651);
  if ( !v653 )
  {
    sub_C5700(a1, &v1548, qword_384F0A0);
    v29 = (*v652)-- == 1LL;
    if ( v29 )
      sub_95CC0(v652);
LABEL_1246:
    v29 = (*v583)-- == 1LL;
    v1135 = 500;
    if ( !v29 )
      goto LABEL_1234;
LABEL_1247:
    sub_95CC0(v583);
    goto LABEL_1234;
  }
  ++*v653;
  v652[4] = v653;
  v654 = sub_13EC40(a1, v1521, v652);
  v29 = (*v652)-- == 1LL;
  v577 = (_QWORD *)v654;
  if ( v29 )
  {
    v1522 = v654;
    sub_95CC0(v652);
    v577 = (_QWORD *)v1522;
  }
  if ( !v577 )
    goto LABEL_1245;
  v1523 = v577;
  v655 = sub_13EC40(a1, v649, v577);
  LODWORD(v577) = (_DWORD)v1523;
  v656 = (_QWORD *)v655;
  v29 = (*v1523)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1523);
  if ( !v656 )
  {
LABEL_1245:
    v1145 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1145;
    v1146 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1146;
    v1147 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1147;
    goto LABEL_1246;
  }
  PyDict_SetItem(v583, *(_QWORD *)v1515, v656);
  v29 = (*v656)-- == 1LL;
  if ( v29 )
    sub_95CC0(v656);
  v657 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CCB270,
                     qword_384DD30,
                     qword_384F4D8,
                     qword_390DB38,
                     0,
                     0,
                     (__int64)v583,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  if ( (unsigned int)PyDict_SetItem(v1459, *(_QWORD *)&qword_384DD30, v657) )
  {
    v29 = (*v657)-- == 1LL;
    if ( v29 )
      sub_95CC0(v657);
LABEL_1233:
    v1134 = a1[11];
    a1[11] = 0LL;
    v1135 = 500;
    v1548.m128i_i64[0] = v1134;
    v1136 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1136;
    v1137 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1137;
LABEL_1234:
    v1138 = v1549;
    if ( v1549 )
    {
      if ( v1549[3] != v1495 )
      {
        v1139 = sub_CC260(v1495, v1135);
        v1140 = v1549;
        *(_QWORD *)(v1139 + 16) = v1138;
        v1141 = v1139;
        ++*v1138;
        if ( v1140 )
        {
          v29 = (*v1140)-- == 1LL;
          if ( v29 )
            sub_95CC0(v1140);
        }
        v1549 = (_QWORD *)v1141;
      }
    }
    else
    {
      v1142 = sub_CC260(v1495, v1135);
      v1143 = v1549;
      v1144 = v1142;
      if ( v1549 )
      {
        v29 = (*v1549)-- == 1LL;
        if ( v29 )
          sub_95CC0(v1143);
      }
      v1549 = (_QWORD *)v1144;
    }
    sub_B31D0(v1495, (unsigned int)"o", 0, v576, v578, (_DWORD)v577);
    sub_D5FD0(v1490);
    goto LABEL_1224;
  }
  v29 = (*v657)-- == 1LL;
  if ( v29 )
    sub_95CC0(v657);
  sub_D5FD0(v1490);
  v658 = (_QWORD *)qword_384E770;
  v659 = PyTuple_New(3LL);
  ++*v658;
  v660 = (_QWORD *)v659;
  *(_QWORD *)(v659 + 24) = v658;
  v661 = qword_384F8A0;
  ++*(_QWORD *)qword_384F8A0;
  v660[4] = v661;
  ++*v1459;
  v660[5] = v1459;
  *(_DWORD *)(v12 + 108) = 386;
  v662 = sub_13F2D0(a1, &PyType_Type, v660, v1498);
  v29 = (*v660)-- == 1LL;
  v663 = (_QWORD *)v662;
  if ( v29 )
    sub_95CC0(v660);
  if ( !v663 )
  {
    v1129 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1129;
    v1130 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1130;
    v1131 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1131;
LABEL_1224:
    v1132 = v1548.m128i_i64[0];
    v1548.m128i_i64[0] = 0LL;
    v1133 = v1548.m128i_i64[1];
    v758 = v1549;
    v1548.m128i_i64[1] = 0LL;
    v1549 = 0LL;
    v29 = (*v1459)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1459);
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v1498)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1498);
    v29 = (*v1459)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1459);
    v1548.m128i_i64[0] = v1132;
    v760 = 386;
    v1548.m128i_i64[1] = v1133;
    v1549 = v758;
    goto LABEL_838;
  }
  ++*v663;
  v29 = (*v1459)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1459);
  v29 = (*v663)-- == 1LL;
  if ( v29 )
    sub_95CC0(v663);
  v664 = qword_384E770;
  v665 = qword_390DC10;
  sub_D6010(qword_390DC10, qword_384E770, v663);
  v29 = (*v1498)-- == 1LL;
  if ( v29 )
  {
    v665 = (__int64)v1498;
    sub_95CC0(v1498);
  }
  v666 = v1459;
  v1460 = *v1459;
  *v666 = v1460 - 1;
  if ( v1460 == 1 )
  {
    v665 = (__int64)v666;
    sub_95CC0(v666);
  }
  v1496 = (_QWORD *)PyDict_New(v665, v664);
  v667 = (_QWORD *)PyDict_New(v665, v664);
  v668 = qword_384F320;
  v669 = qword_384F328;
  ++*v667;
  v670 = v667;
  PyDict_SetItem(v667, v669, v668);
  PyDict_SetItem(v670, qword_384F338, qword_384EA10);
  v671 = sub_B2750(a1, qword_390E000, qword_390DC08, 8LL);
  v1461 = v671;
  v672 = a1[3];
  a1[3] = v671;
  if ( v672 )
    *(_QWORD *)(v671 + 24) = v672;
  ++*(_QWORD *)v671;
  *(_BYTE *)(v671 + 116) = 1;
  v673 = *(_QWORD **)&qword_384D668;
  v1499 = qword_384F470;
  v674 = sub_1C68820();
  if ( !v674 )
  {
    v1101 = 525;
    sub_C5700(a1, &v1548, qword_384F040);
    goto LABEL_1187;
  }
  *(_QWORD *)v1516 = v674;
  v675 = PyDict_NewPresized(2LL);
  PyDict_SetItem(v675, v1499, *(_QWORD *)v1516);
  PyDict_SetItem(v675, *(_QWORD *)&qword_384DAC8, &PyBool_Type);
  ++*v673;
  v676 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CDFAC0,
                     qword_384F340,
                     qword_384F4E0,
                     qword_390DB40,
                     (int)v673,
                     0,
                     v675,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  if ( (unsigned int)PyDict_SetItem(v670, *(_QWORD *)&qword_384F340, v676) )
  {
    v29 = (*v676)-- == 1LL;
    if ( v29 )
      sub_95CC0(v676);
    v1126 = a1[11];
    v1101 = 525;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1126;
    v1127 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1127;
    v1128 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1128;
    goto LABEL_1187;
  }
  v29 = (*v676)-- == 1LL;
  if ( v29 )
    sub_95CC0(v676);
  v1500 = qword_384E860;
  v680 = sub_1C675F0();
  if ( !v680 )
  {
    v1101 = 532;
    sub_C5700(a1, &v1548, qword_384DC28);
    goto LABEL_1187;
  }
  v681 = (_QWORD *)sub_B00D0(a1, v680, qword_384DC28);
  if ( !v681 )
    goto LABEL_1213;
  v682 = (_QWORD *)PyDict_NewPresized(2LL);
  PyDict_SetItem(v682, v1500, v681);
  v29 = (*v681)-- == 1LL;
  if ( v29 )
    sub_95CC0(v681);
  v683 = qword_384F498;
  v684 = sub_1C675F0();
  if ( !v684 )
  {
    sub_C5700(a1, &v1548, qword_384DC28);
LABEL_1215:
    v29 = (*v682)-- == 1LL;
    v1101 = 532;
    if ( !v29 )
      goto LABEL_1187;
    goto LABEL_1200;
  }
  v685 = sub_B00D0(a1, v684, qword_384DC28);
  v678 = v685;
  if ( !v685 )
  {
    v1123 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1123;
    v1124 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1124;
    v1125 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1125;
    goto LABEL_1215;
  }
  v1501 = (_QWORD *)v685;
  PyDict_SetItem(v682, v683, v685);
  v29 = (*v1501)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1501);
  v686 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CD3AD0,
                     qword_384DC50,
                     qword_384F4E8,
                     qword_390DB48,
                     0,
                     0,
                     (__int64)v682,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  if ( (unsigned int)PyDict_SetItem(v670, *(_QWORD *)&qword_384DC50, v686) )
  {
    v29 = (*v686)-- == 1LL;
    if ( v29 )
      sub_95CC0(v686);
LABEL_1213:
    v1120 = a1[11];
    v1101 = 532;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1120;
    v1121 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1121;
    v1122 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1122;
    goto LABEL_1187;
  }
  v29 = (*v686)-- == 1LL;
  if ( v29 )
    sub_95CC0(v686);
  v1502 = qword_384E860;
  v687 = sub_1C675F0();
  if ( !v687 )
  {
    v1101 = 548;
    sub_C5700(a1, &v1548, qword_384DC28);
    goto LABEL_1187;
  }
  v688 = (_QWORD *)sub_B00D0(a1, v687, qword_384DC28);
  if ( !v688 )
    goto LABEL_1205;
  v682 = (_QWORD *)PyDict_NewPresized(2LL);
  PyDict_SetItem(v682, v1502, v688);
  v29 = (*v688)-- == 1LL;
  if ( v29 )
    sub_95CC0(v688);
  v689 = qword_384F498;
  v690 = sub_1C687A0();
  if ( !v690 )
  {
    sub_C5700(a1, &v1548, qword_384DAD0);
LABEL_1208:
    v29 = (*v682)-- == 1LL;
    v1101 = 548;
    if ( !v29 )
      goto LABEL_1187;
    goto LABEL_1200;
  }
  v691 = sub_B00D0(a1, v690, qword_384D990);
  v678 = v691;
  if ( !v691 )
  {
    v1117 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1117;
    v1118 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1118;
    v1119 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1119;
    goto LABEL_1208;
  }
  v1503 = (_QWORD *)v691;
  PyDict_SetItem(v682, v689, v691);
  v29 = (*v1503)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1503);
  v692 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CC4EA0,
                     qword_384DC58,
                     qword_384F4F0,
                     qword_390DB50,
                     0,
                     0,
                     (__int64)v682,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  if ( (unsigned int)PyDict_SetItem(v670, *(_QWORD *)&qword_384DC58, v692) )
  {
    v29 = (*v692)-- == 1LL;
    if ( v29 )
      sub_95CC0(v692);
LABEL_1205:
    v1114 = a1[11];
    v1101 = 548;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1114;
    v1115 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1115;
    v1116 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1116;
    goto LABEL_1187;
  }
  v29 = (*v692)-- == 1LL;
  if ( v29 )
    sub_95CC0(v692);
  v1504 = qword_384F4F8;
  v693 = sub_1C675F0();
  if ( !v693 )
  {
    v1101 = 555;
    sub_C5700(a1, &v1548, qword_384DC28);
    goto LABEL_1187;
  }
  v694 = (_QWORD *)sub_B00D0(a1, v693, qword_384DC28);
  if ( !v694 )
    goto LABEL_1186;
  v682 = (_QWORD *)PyDict_NewPresized(3LL);
  PyDict_SetItem(v682, v1504, v694);
  v29 = (*v694)-- == 1LL;
  if ( v29 )
    sub_95CC0(v694);
  v695 = qword_384F500;
  v696 = sub_1C675F0();
  if ( !v696 )
  {
    sub_C5700(a1, &v1548, qword_384DC28);
    goto LABEL_1199;
  }
  v697 = sub_B00D0(a1, v696, qword_384DC28);
  v678 = v697;
  if ( !v697 )
  {
    v1111 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1111;
    v1112 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1112;
    v1113 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1113;
LABEL_1199:
    v29 = (*v682)-- == 1LL;
    v1101 = 555;
    if ( !v29 )
      goto LABEL_1187;
LABEL_1200:
    sub_95CC0(v682);
    goto LABEL_1187;
  }
  v1505 = (_QWORD *)v697;
  PyDict_SetItem(v682, v695, v697);
  v29 = (*v1505)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1505);
  PyDict_SetItem(v682, qword_384F498, &PyFloat_Type);
  v698 = (_QWORD *)sub_C2AC0(
                     (int)sub_1CC9C00,
                     qword_384DD60,
                     qword_384F508,
                     qword_390DB58,
                     0,
                     0,
                     (__int64)v682,
                     qword_390DC08,
                     0LL,
                     0LL,
                     0LL);
  if ( (unsigned int)PyDict_SetItem(v670, *(_QWORD *)&qword_384DD60, v698) )
  {
    v29 = (*v698)-- == 1LL;
    if ( v29 )
      sub_95CC0(v698);
LABEL_1186:
    v1100 = a1[11];
    a1[11] = 0LL;
    v1101 = 555;
    v1548.m128i_i64[0] = v1100;
    v1102 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1102;
    v1103 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1103;
LABEL_1187:
    v1104 = v1549;
    if ( v1549 )
    {
      if ( v1549[3] != v1461 )
      {
        v1105 = sub_CC260(v1461, v1101);
        v1106 = v1549;
        *(_QWORD *)(v1105 + 16) = v1104;
        v1107 = v1105;
        ++*v1104;
        if ( v1106 )
        {
          v29 = (*v1106)-- == 1LL;
          if ( v29 )
            sub_95CC0(v1106);
        }
        v1549 = (_QWORD *)v1107;
      }
    }
    else
    {
      v1108 = sub_CC260(v1461, v1101);
      v1109 = v1549;
      v1110 = v1108;
      if ( v1549 )
      {
        v29 = (*v1549)-- == 1LL;
        if ( v29 )
          sub_95CC0(v1109);
      }
      v1549 = (_QWORD *)v1110;
    }
    sub_B31D0(v1461, (unsigned int)"o", 0, v677, v678, v679);
    sub_D5FD0(v1490);
    goto LABEL_1176;
  }
  v29 = (*v698)-- == 1LL;
  if ( v29 )
    sub_95CC0(v698);
  sub_D5FD0(v1490);
  v699 = (_QWORD *)qword_384EA10;
  v700 = PyTuple_New(3LL);
  ++*v699;
  v701 = (_QWORD *)v700;
  *(_QWORD *)(v700 + 24) = v699;
  v702 = qword_384F8A0;
  ++*(_QWORD *)qword_384F8A0;
  v701[4] = v702;
  ++*v670;
  v701[5] = v670;
  *(_DWORD *)(v12 + 108) = 524;
  v703 = sub_13F2D0(a1, &PyType_Type, v701, v1496);
  v29 = (*v701)-- == 1LL;
  v704 = (_QWORD *)v703;
  if ( v29 )
    sub_95CC0(v701);
  if ( !v704 )
  {
    v1096 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1096;
    v1097 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1097;
    v1098 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1098;
LABEL_1176:
    v1099 = v1548;
    v1548 = 0uLL;
    v758 = v1549;
    v1549 = 0LL;
    v29 = (*v670)-- == 1LL;
    if ( v29 )
      sub_95CC0(v670);
    v1548 = 0uLL;
    v1549 = 0LL;
    v29 = (*v1496)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1496);
    v29 = (*v670)-- == 1LL;
    if ( v29 )
      sub_95CC0(v670);
    v1548 = v1099;
    v760 = 524;
    v1549 = v758;
    goto LABEL_838;
  }
  ++*v704;
  v29 = (*v670)-- == 1LL;
  if ( v29 )
    sub_95CC0(v670);
  v29 = (*v704)-- == 1LL;
  if ( v29 )
    sub_95CC0(v704);
  sub_D6010(qword_390DC10, qword_384EA10, v704);
  v29 = (*v1496)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1496);
  v29 = (*v670)-- == 1LL;
  if ( v29 )
    sub_95CC0(v670);
  v705 = qword_384E840;
  v706 = (_QWORD *)PyDict_NewPresized(2LL);
  PyDict_SetItem(v706, v705, &PyBytes_Type);
  v707 = qword_384F498;
  v708 = sub_1C673F0();
  if ( !v708 )
  {
    sub_C5700(a1, &v1548, qword_384F090);
LABEL_1172:
    v29 = (*v706)-- == 1LL;
    if ( v29 )
    {
      v760 = 570;
      sub_95CC0(v706);
      v758 = v1549;
    }
    else
    {
      v758 = v1549;
      v760 = 570;
    }
    goto LABEL_838;
  }
  v709 = sub_13EC40(a1, v708, qword_384F510);
  v710 = (_QWORD *)v709;
  if ( !v709 )
  {
    v1093 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1093;
    v1094 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1094;
    v1095 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1095;
    goto LABEL_1172;
  }
  PyDict_SetItem(v706, v707, v709);
  v29 = (*v710)-- == 1LL;
  if ( v29 )
    sub_95CC0(v710);
  v711 = sub_C2AC0((int)sub_1D0F210, qword_384EA08, 0, qword_390DB60, 0, 0, (__int64)v706, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EA08, v711);
  v712 = qword_384F518;
  v713 = (_QWORD *)PyDict_NewPresized(2LL);
  PyDict_SetItem(v713, v712, &PyBytes_Type);
  v714 = qword_384F498;
  v715 = sub_1C675F0();
  if ( !v715 )
  {
    sub_C5700(a1, &v1548, qword_384DC28);
LABEL_1076:
    v29 = (*v713)-- == 1LL;
    if ( v29 )
    {
      v760 = 591;
      sub_95CC0(v713);
      v758 = v1549;
    }
    else
    {
      v758 = v1549;
      v760 = 591;
    }
    goto LABEL_838;
  }
  v716 = sub_B00D0(a1, v715, qword_384DC28);
  v717 = (_QWORD *)v716;
  if ( !v716 )
  {
    v1012 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1012;
    v1013 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1013;
    v1014 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1014;
    goto LABEL_1076;
  }
  PyDict_SetItem(v713, v714, v716);
  v29 = (*v717)-- == 1LL;
  if ( v29 )
    sub_95CC0(v717);
  v718 = sub_C2AC0((int)sub_1CC1FE0, qword_384DD00, 0, qword_390DB68, 0, 0, (__int64)v713, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384DD00, v718);
  v719 = qword_384E860;
  v720 = sub_1C675F0();
  if ( !v720 )
  {
    v760 = 595;
    sub_C5700(a1, &v1548, qword_384DC28);
    v758 = v1549;
    goto LABEL_838;
  }
  v721 = (_QWORD *)sub_B00D0(a1, v720, qword_384DC28);
  if ( !v721 )
  {
    v1010 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 595;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v1010;
    v1011 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v1011;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v722 = (_QWORD *)PyDict_NewPresized(3LL);
  PyDict_SetItem(v722, v719, v721);
  v29 = (*v721)-- == 1LL;
  if ( v29 )
    sub_95CC0(v721);
  PyDict_SetItem(v722, qword_384DBA8, &PyTuple_Type);
  v723 = qword_384F498;
  v724 = sub_1C675F0();
  if ( !v724 )
  {
    sub_C5700(a1, &v1548, qword_384DC28);
LABEL_1068:
    v29 = (*v722)-- == 1LL;
    if ( v29 )
    {
      v1009 = v722;
      v760 = 595;
      sub_95CC0(v1009);
      v758 = v1549;
    }
    else
    {
      v758 = v1549;
      v760 = 595;
    }
    goto LABEL_838;
  }
  v725 = sub_B00D0(a1, v724, qword_384DC28);
  v726 = (_QWORD *)v725;
  if ( !v725 )
  {
    v1003 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1003;
    v1004 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1004;
    v1005 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1005;
    goto LABEL_1068;
  }
  PyDict_SetItem(v722, v723, v725);
  v29 = (*v726)-- == 1LL;
  if ( v29 )
    sub_95CC0(v726);
  v727 = sub_C2AC0((int)sub_1CC1D50, qword_384DD20, 0, qword_390DB70, 0, 0, (__int64)v722, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384DD20, v727);
  v728 = qword_384E998;
  v729 = sub_1C68720();
  if ( !v729 )
  {
    v760 = 599;
    sub_C5700(a1, &v1548, qword_384E770);
    v758 = v1549;
    goto LABEL_838;
  }
  v730 = (_QWORD *)PyDict_NewPresized(4LL);
  PyDict_SetItem(v730, v728, v729);
  v731 = qword_384DD58;
  v732 = sub_1C686A0();
  if ( !v732 )
  {
    sub_C5700(a1, &v1548, qword_384EA10);
    v29 = (*v730)-- == 1LL;
    if ( v29 )
    {
      v760 = 599;
      sub_95CC0(v730);
      v758 = v1549;
    }
    else
    {
      v758 = v1549;
      v760 = 599;
    }
    goto LABEL_838;
  }
  PyDict_SetItem(v730, v731, v732);
  PyDict_SetItem(v730, qword_384F520, &PyBytes_Type);
  PyDict_SetItem(v730, qword_384F528, &PyBytes_Type);
  v733 = sub_C2AC0(
           (int)sub_1CDC800,
           qword_384EA30,
           0,
           qword_390DB78,
           0,
           0,
           (__int64)v730,
           qword_390DC08,
           qword_384DDB0,
           0LL,
           0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EA30, v733);
  v734 = sub_CB210(qword_384F530);
  v735 = sub_C2AC0(
           (int)sub_1CFF5B0,
           qword_384EA70,
           0,
           qword_390DB80,
           0,
           0,
           v734,
           qword_390DC08,
           qword_384DDC8,
           0LL,
           0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EA70, v735);
  v736 = qword_384F538;
  ++*(_QWORD *)qword_384F538;
  v1550 = (_QWORD *)v736;
  v1462 = (_QWORD *)sub_1CE6380(a1, &v1550);
  if ( !v1462 )
  {
    v756 = a1[11];
    v757 = a1[12];
    a1[11] = 0LL;
    v758 = (_QWORD *)a1[13];
    a1[12] = 0LL;
    a1[13] = 0LL;
LABEL_828:
    v1548.m128i_i64[0] = v756;
    v760 = 649;
    v1548.m128i_i64[1] = v757;
    v1549 = v758;
    goto LABEL_838;
  }
  v1497 = (_QWORD *)PyDict_New(a1, &v1550);
  if ( v1462 == &Py_TrueStruct )
    goto LABEL_1057;
  if ( v1462 == (_QWORD *)&Py_FalseStruct || v1462 == &Py_NoneStruct )
    goto LABEL_792;
  v737 = sub_96F70(v1462);
  if ( v737 == -1 )
  {
    v1434 = 0LL;
    v1006 = a1[11];
    v738 = 0LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v1006;
    v1007 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v1007;
    v1008 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v1008;
    goto LABEL_817;
  }
  if ( v737 )
  {
LABEL_1057:
    v1434 = (_QWORD *)sub_13EDA0(a1, v1462, qword_384F8B0, 0LL);
    if ( !v1434 )
      goto LABEL_1056;
    v738 = (_QWORD *)sub_B3060(v1434);
    v29 = (*v1434)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1434);
    if ( !v738 )
    {
      v1434 = 0LL;
      v1000 = a1[11];
      a1[11] = 0LL;
      v1548.m128i_i64[0] = v1000;
      v1001 = a1[12];
      a1[12] = 0LL;
      v1548.m128i_i64[1] = v1001;
      v1002 = (_QWORD *)a1[13];
      a1[13] = 0LL;
      v1549 = v1002;
      goto LABEL_817;
    }
  }
  else
  {
LABEL_792:
    ++PyType_Type;
    v738 = &PyType_Type;
  }
  v739 = sub_B2A20(a1, v738, v1462);
  v29 = (*v738)-- == 1LL;
  v1434 = (_QWORD *)v739;
  if ( v29 )
    sub_95CC0(v738);
  if ( !v1434 )
    goto LABEL_1056;
  v740 = sub_AF4B0(a1, v1434, qword_384F540);
  if ( v740 == -1 )
    goto LABEL_1056;
  if ( !v740 )
  {
    v738 = (_QWORD *)PyDict_New(a1, v1434);
    goto LABEL_942;
  }
  v741 = (_QWORD *)sub_B00D0(a1, v1434, qword_384F540);
  if ( !v741 )
  {
LABEL_1056:
    v997 = a1[11];
    v738 = 0LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v997;
    v998 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v998;
    v999 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v999;
    goto LABEL_817;
  }
  v742 = (_QWORD *)qword_384EA58;
  v743 = PyTuple_New(2LL);
  ++*v742;
  v744 = (_QWORD *)v743;
  *(_QWORD *)(v743 + 24) = v742;
  ++*v1462;
  *(_QWORD *)(v743 + 32) = v1462;
  *(_DWORD *)(v12 + 108) = 649;
  v745 = sub_13F2D0(a1, v741, v743, v1497);
  v29 = (*v741)-- == 1LL;
  v738 = (_QWORD *)v745;
  if ( v29 )
    sub_95CC0(v741);
  v29 = (*v744)-- == 1LL;
  if ( v29 )
    sub_95CC0(v744);
  if ( !v738 || (v746 = sub_AF4B0(a1, v738, qword_384D5B0), v746 == -1) )
  {
LABEL_1042:
    v980 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v980;
    v981 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v981;
    v982 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v982;
LABEL_817:
    v756 = v1548.m128i_i64[0];
    v1548.m128i_i64[0] = 0LL;
    v757 = v1548.m128i_i64[1];
    v758 = v1549;
    v1548.m128i_i64[1] = 0LL;
    v1549 = 0LL;
    v29 = (*v1462)-- == 1LL;
    if ( v29 )
      sub_95CC0(v1462);
    if ( v1497 )
    {
      v29 = (*v1497)-- == 1LL;
      if ( v29 )
        sub_95CC0(v1497);
    }
    v759 = v1434;
    if ( v1434 )
    {
      *(_QWORD *)v1435 = *v1434;
      *v759 = *(_QWORD *)v1435 - 1LL;
      if ( *(_QWORD *)v1435 == 1LL )
        sub_95CC0(v759);
    }
    if ( v738 )
    {
      v29 = (*v738)-- == 1LL;
      if ( v29 )
        sub_95CC0(v738);
    }
    goto LABEL_828;
  }
  if ( &Py_FalseStruct != (_UNKNOWN *)&Py_TrueStruct && !v746 )
  {
    v747 = qword_384F548;
    v748 = sub_B2DB0(a1, v1434, qword_384D560, qword_384F550);
    if ( v748 )
    {
      v749 = PyTuple_New(2LL);
      *(_QWORD *)(v749 + 24) = v748;
      v750 = (_QWORD *)v749;
      v1491 = (_QWORD *)sub_B3060(v738);
      v751 = sub_B00D0(a1, v1491, qword_384D560);
      v29 = (*v1491)-- == 1LL;
      if ( v29 )
        sub_95CC0(v1491);
      if ( !v751 )
      {
        v839 = a1[11];
        a1[11] = 0LL;
        v1548.m128i_i64[0] = v839;
        v840 = a1[12];
        a1[12] = 0LL;
        v1548.m128i_i64[1] = v840;
        v841 = (_QWORD *)a1[13];
        a1[13] = 0LL;
        v1549 = v841;
        v29 = (*v750)-- == 1LL;
        if ( v29 )
          sub_95CC0(v750);
        goto LABEL_817;
      }
      v750[4] = v751;
      v752 = sub_A7AF0(v747, v750);
      v29 = (*v750)-- == 1LL;
      v753 = (_QWORD *)v752;
      if ( v29 )
        sub_95CC0(v750);
      if ( v753 )
      {
        *(_DWORD *)(v12 + 108) = 649;
        v754 = sub_C0FA0(a1, PyExc_TypeError, v753);
        v29 = (*v753)-- == 1LL;
        v755 = v754;
        if ( v29 )
          sub_95CC0(v753);
        v1548.m128i_i64[0] = v755;
        sub_C5A00(a1, &v1548);
        goto LABEL_817;
      }
    }
    goto LABEL_1042;
  }
LABEL_942:
  ++*v738;
  if ( (unsigned int)PyObject_SetItem(v738, qword_384F328, qword_384F320)
    || (unsigned int)PyObject_SetItem(v738, qword_384F338, qword_384EA58) )
  {
LABEL_1038:
    v975 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v975;
    v976 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v976;
    v977 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v977;
LABEL_1039:
    v978 = v1548;
    v1548 = 0uLL;
    v979 = v1549;
    v1549 = 0LL;
    v29 = (*v738)-- == 1LL;
    if ( v29 )
      sub_95CC0(v738);
    v1548 = v978;
    v1549 = v979;
    goto LABEL_817;
  }
  v846 = sub_B2750(a1, qword_390DFF8, qword_390DC08, 8LL);
  v847 = a1[3];
  a1[3] = v846;
  if ( v847 )
    *(_QWORD *)(v846 + 24) = v847;
  ++*(_QWORD *)v846;
  v848 = qword_390DB88;
  *(_BYTE *)(v846 + 116) = 1;
  v1506 = (_QWORD *)sub_C2AC0(
                      (int)sub_1CC1AB0,
                      qword_384F340,
                      qword_384F558,
                      v848,
                      0,
                      0,
                      0LL,
                      qword_390DC08,
                      0LL,
                      0LL,
                      0LL);
  v849 = PyObject_SetItem(v738, *(_QWORD *)&qword_384F340, v1506);
  v852 = (int)v1506;
  v853 = v849;
  v29 = (*v1506)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1506);
  if ( v853 )
  {
    v994 = a1[11];
    v984 = 650LL;
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v994;
    v995 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v995;
    v996 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v996;
    goto LABEL_1044;
  }
  v1507 = (_QWORD *)sub_C2AC0(
                      (int)sub_1CC1860,
                      qword_384F560,
                      qword_384F568,
                      qword_390DB90,
                      0,
                      0,
                      0LL,
                      qword_390DC08,
                      0LL,
                      0LL,
                      0LL);
  v854 = PyObject_SetItem(v738, *(_QWORD *)&qword_384F560, v1507);
  v852 = (int)v1507;
  v855 = v854;
  v29 = (*v1507)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1507);
  if ( v855 )
  {
    v983 = a1[11];
    a1[11] = 0LL;
    v984 = 653LL;
    v1548.m128i_i64[0] = v983;
    v985 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v985;
    v986 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v986;
LABEL_1044:
    v987 = v1549;
    if ( v1549 )
    {
      if ( v1549[3] != v846 )
      {
        v988 = sub_CC260(v846, v984);
        v989 = v1549;
        *(_QWORD *)(v988 + 16) = v987;
        v990 = v988;
        ++*v987;
        if ( v989 )
        {
          v29 = (*v989)-- == 1LL;
          if ( v29 )
            sub_95CC0(v989);
        }
        v1549 = (_QWORD *)v990;
      }
    }
    else
    {
      v991 = sub_CC260(v846, v984);
      v992 = v1549;
      v993 = v991;
      if ( v1549 )
      {
        v29 = (*v1549)-- == 1LL;
        if ( v29 )
          sub_95CC0(v992);
      }
      v1549 = (_QWORD *)v993;
    }
    sub_B31D0(v846, (unsigned int)"o", 0, v850, v852, v851);
    sub_D5FD0(v1490);
    goto LABEL_1039;
  }
  sub_D5FD0(v1490);
  v856 = sub_A1020(v1462, qword_384F538);
  if ( v856 == -1 || v856 == 1 && (unsigned int)PyObject_SetItem(v738, qword_384F570, qword_384F538) )
    goto LABEL_1038;
  v857 = (_QWORD *)qword_384EA58;
  v858 = (_QWORD *)PyTuple_New(3LL);
  ++*v857;
  v858[3] = v857;
  v1508 = v858;
  ++*v1462;
  v858[4] = v1462;
  ++*v738;
  v858[5] = v738;
  *(_DWORD *)(v12 + 108) = 649;
  v859 = (_QWORD *)sub_13F2D0(a1, v1434, v858, v1497);
  v29 = (*v1508)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1508);
  if ( !v859 )
    goto LABEL_1038;
  ++*v859;
  v29 = (*v738)-- == 1LL;
  if ( v29 )
    sub_95CC0(v738);
  v29 = (*v859)-- == 1LL;
  if ( v29 )
    sub_95CC0(v859);
  sub_D6010(qword_390DC10, qword_384EA58, v859);
  v860 = v1462;
  v1463 = *v1462;
  *v860 = v1463 - 1;
  if ( v1463 == 1 )
    sub_95CC0(v860);
  v29 = (*v1497)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1497);
  v861 = v1434;
  *(_QWORD *)v1436 = *v1434;
  *v861 = *(_QWORD *)v1436 - 1LL;
  if ( *(_QWORD *)v1436 == 1LL )
    sub_95CC0(v861);
  v29 = (*v738)-- == 1LL;
  if ( v29 )
    sub_95CC0(v738);
  v862 = sub_CB210(qword_384F578);
  v863 = sub_C2AC0(
           (int)sub_1CCFD90,
           qword_384E610,
           0,
           qword_390DB98,
           0,
           0,
           v862,
           qword_390DC08,
           qword_384DE58,
           0LL,
           0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E610, v863);
  v864 = sub_CB210(qword_384F580);
  v865 = sub_C2AC0((int)sub_1CF9310, qword_384E6C0, 0, qword_390DBA0, 0, 0, v864, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E6C0, v865);
  v866 = sub_C2AC0((int)sub_1CC0F20, qword_384DF98, 0, qword_390DBA8, 0, 0, 0LL, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384DF98, v866);
  v867 = qword_384F588;
  v868 = qword_390DBB0;
  v869 = qword_384E038;
  ++**(_QWORD **)&qword_384F588;
  v870 = sub_C2AC0((int)sub_1CEFD70, v869, 0, v868, v867, 0, 0LL, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E038, v870);
  v871 = sub_C2AC0((int)sub_1CEF280, qword_384E040, 0, qword_390DBB8, 0, 0, 0LL, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E040, v871);
  v872 = sub_C2AC0((int)sub_1CDA440, qword_384E048, 0, qword_390DBC0, 0, 0, 0LL, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E048, v872);
  v873 = *(_QWORD **)&qword_384F590;
  *(_QWORD *)v1437 = qword_384E860;
  v874 = sub_1C675F0();
  if ( !v874 )
  {
    v760 = 853;
    sub_C5700(a1, &v1548, qword_384DC28);
    v758 = v1549;
    goto LABEL_838;
  }
  v875 = (_QWORD *)sub_B00D0(a1, v874, qword_384DC28);
  if ( !v875 )
  {
    v973 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 853;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v973;
    v974 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v974;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v876 = PyDict_NewPresized(1LL);
  PyDict_SetItem(v876, *(_QWORD *)v1437, v875);
  v29 = (*v875)-- == 1LL;
  if ( v29 )
    sub_95CC0(v875);
  ++*v873;
  v877 = sub_C2AC0((int)sub_1CC0420, qword_384E030, 0, qword_390DBC8, (int)v873, 0, v876, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E030, v877);
  v878 = *(_QWORD **)&qword_384F598;
  *(_QWORD *)v1438 = qword_384E6F8;
  v879 = sub_1C675F0();
  if ( !v879 )
  {
    v760 = 863;
    sub_C5700(a1, &v1548, qword_384DC28);
    v758 = v1549;
    goto LABEL_838;
  }
  v880 = (_QWORD *)sub_B00D0(a1, v879, qword_384DC28);
  if ( !v880 )
  {
    v970 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 863;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v970;
    v971 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v971;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v881 = (_QWORD *)PyDict_NewPresized(3LL);
  PyDict_SetItem(v881, *(_QWORD *)v1438, v880);
  v29 = (*v880)-- == 1LL;
  if ( v29 )
    sub_95CC0(v880);
  v882 = qword_384E700;
  v883 = sub_1C675F0();
  if ( !v883 )
  {
    sub_C5700(a1, &v1548, qword_384DC28);
LABEL_1029:
    v29 = (*v881)-- == 1LL;
    if ( v29 )
    {
      v972 = v881;
      v760 = 864;
      sub_95CC0(v972);
      v758 = v1549;
    }
    else
    {
      v758 = v1549;
      v760 = 864;
    }
    goto LABEL_838;
  }
  v884 = sub_B00D0(a1, v883, qword_384DC28);
  if ( !v884 )
  {
    v967 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v967;
    v968 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v968;
    v969 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v969;
    goto LABEL_1029;
  }
  v1439 = (_QWORD *)v884;
  PyDict_SetItem(v881, v882, v884);
  v29 = (*v1439)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1439);
  PyDict_SetItem(v881, qword_384F498, &PyLong_Type);
  ++*v878;
  v885 = sub_C2AC0(
           (int)sub_1CEE3F0,
           qword_384E6F0,
           0,
           qword_390DBD0,
           (int)v878,
           0,
           (__int64)v881,
           qword_390DC08,
           0LL,
           0LL,
           0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E6F0, v885);
  v886 = qword_384E840;
  v887 = (_QWORD *)PyDict_NewPresized(2LL);
  PyDict_SetItem(v887, v886, &PyBytes_Type);
  v888 = qword_384F498;
  v889 = sub_1C673F0();
  if ( !v889 )
  {
    sub_C5700(a1, &v1548, qword_384F090);
LABEL_1021:
    v29 = (*v887)-- == 1LL;
    if ( v29 )
    {
      v760 = 884;
      sub_95CC0(v887);
      v758 = v1549;
    }
    else
    {
      v758 = v1549;
      v760 = 884;
    }
    goto LABEL_838;
  }
  v890 = sub_13EC40(a1, v889, qword_384F510);
  if ( !v890 )
  {
    v960 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v960;
    v961 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v961;
    v962 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v962;
    goto LABEL_1021;
  }
  v1440 = (_QWORD *)v890;
  PyDict_SetItem(v887, v888, v890);
  v29 = (*v1440)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1440);
  v891 = sub_C2AC0(
           (int)sub_1D0CF40,
           qword_384E768,
           0,
           qword_390DBD8,
           0,
           0,
           (__int64)v887,
           qword_390DC08,
           qword_384E078,
           0LL,
           0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E768, v891);
  v892 = sub_CB210(qword_384F5A0);
  v893 = sub_C2AC0(
           (int)sub_1CD9150,
           qword_384E0A8,
           0,
           qword_390DBE0,
           0,
           0,
           v892,
           qword_390DC08,
           qword_384E098,
           0LL,
           0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E0A8, v893);
  v894 = sub_CB210(qword_384F5A8);
  v895 = sub_C2AC0(
           (int)sub_1CED710,
           qword_384E760,
           0,
           qword_390DBE8,
           0,
           0,
           v894,
           qword_390DC08,
           qword_384E0F0,
           0LL,
           0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E760, v895);
  v896 = *(_QWORD **)&qword_384F5B0;
  *(_QWORD *)v1441 = qword_384E148;
  v897 = (_QWORD *)PyDict_NewPresized(4LL);
  PyDict_SetItem(v897, *(_QWORD *)v1441, &PyDict_Type);
  *(_QWORD *)v1442 = qword_384F5B8;
  v898 = sub_1C673F0();
  if ( !v898 )
  {
    sub_C5700(a1, &v1548, qword_384F090);
    goto LABEL_1018;
  }
  v899 = sub_13EC40(a1, v898, qword_384F5C0);
  if ( !v899 )
  {
    v964 = a1[11];
    a1[11] = 0LL;
    v1548.m128i_i64[0] = v964;
    v965 = a1[12];
    a1[12] = 0LL;
    v1548.m128i_i64[1] = v965;
    v966 = (_QWORD *)a1[13];
    a1[13] = 0LL;
    v1549 = v966;
LABEL_1018:
    v29 = (*v897)-- == 1LL;
    if ( v29 )
    {
      v963 = v897;
      v760 = 933;
      sub_95CC0(v963);
      v758 = v1549;
    }
    else
    {
      v758 = v1549;
      v760 = 933;
    }
    goto LABEL_838;
  }
  v1464 = (_QWORD *)v899;
  PyDict_SetItem(v897, *(_QWORD *)v1442, v899);
  v29 = (*v1464)-- == 1LL;
  if ( v29 )
    sub_95CC0(v1464);
  PyDict_SetItem(v897, qword_384F5C8, &PyLong_Type);
  PyDict_SetItem(v897, qword_384F498, &PyDict_Type);
  ++*v896;
  v900 = sub_C2AC0(
           (int)sub_1CCDF50,
           qword_384E140,
           0,
           qword_390DBF0,
           (int)v896,
           0,
           (__int64)v897,
           qword_390DC08,
           0LL,
           0LL,
           0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E140, v900);
  v901 = sub_CB210(qword_384F5D0);
  v902 = sub_C2AC0((int)sub_1CE68F0, qword_384E790, 0, qword_390DBF8, 0, 0, v901, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E790, v902);
  v903 = qword_384E3E0;
  v904 = sub_1C67270();
  if ( !v904 )
  {
    v760 = 1027;
    sub_C5700(a1, &v1548, qword_384E338);
    v758 = v1549;
    goto LABEL_838;
  }
  *(_QWORD *)v1443 = v904;
  v905 = PyDict_NewPresized(3LL);
  PyDict_SetItem(v905, v903, *(_QWORD *)v1443);
  PyDict_SetItem(v905, *(_QWORD *)&qword_384D6E8, &PyUnicode_Type);
  PyDict_SetItem(v905, qword_384F498, &Py_NoneStruct);
  v906 = sub_C2AC0((int)sub_1CC7D50, qword_384E348, 0, qword_390DC00, 0, 0, v905, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384E348, v906);
  v907 = qword_384E6E0;
  v908 = (_QWORD *)PyDict_NewPresized(10LL);
  PyDict_SetItem(v908, v907, &PyUnicode_Type);
  PyDict_SetItem(v908, *(_QWORD *)&qword_384D6E0, &PyLong_Type);
  PyDict_SetItem(v908, *(_QWORD *)&qword_384D6E8, &PyUnicode_Type);
  PyDict_SetItem(v908, *(_QWORD *)&qword_384D6F8, &PyUnicode_Type);
  PyDict_SetItem(v908, qword_384E360, &PyDict_Type);
  PyDict_SetItem(v908, *(_QWORD *)&qword_384D700, &PyUnicode_Type);
  PyDict_SetItem(v908, qword_384E7D0, &PyUnicode_Type);
  PyDict_SetItem(v908, qword_384E7D8, &PyBool_Type);
  v909 = qword_384E7E0;
  v910 = sub_1C66470();
  if ( !v910 )
  {
    sub_C5700(a1, &v1548, qword_384EFA8);
    v29 = (*v908)-- == 1LL;
    if ( v29 )
    {
      v760 = 1055;
      sub_95CC0(v908);
      v758 = v1549;
    }
    else
    {
      v758 = v1549;
      v760 = 1055;
    }
    goto LABEL_838;
  }
  PyDict_SetItem(v908, v909, v910);
  PyDict_SetItem(v908, qword_384E7E8, &PyList_Type);
  v911 = sub_C2AC0((int)sub_1C97020, qword_384ECC8, 0, qword_390DF80, 0, 0, (__int64)v908, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384ECC8, v911);
  v912 = sub_CB210(qword_384F5D8);
  v913 = sub_C2AC0((int)sub_1C89930, qword_384EB60, 0, qword_390DF88, 0, 0, v912, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EB60, v913);
  v914 = sub_CB210(qword_384F448);
  v915 = sub_C2AC0((int)sub_1C67770, qword_384EC88, 0, qword_390DF90, 0, 0, v914, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EC88, v915);
  v916 = sub_CB210(qword_384F5E0);
  v917 = sub_C2AC0(
           (int)sub_1C89420,
           qword_384EC78[0],
           0,
           qword_390DF98,
           0,
           0,
           v916,
           qword_390DC08,
           qword_384EB98,
           0LL,
           0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)qword_384EC78, v917);
  *(_QWORD *)v1444 = qword_384DA20;
  v918 = sub_1C66C70();
  if ( !v918 )
  {
    v760 = 1425;
    sub_C5700(a1, &v1548, qword_384EC00);
    v758 = v1549;
    goto LABEL_838;
  }
  v919 = PyDict_NewPresized(4LL);
  PyDict_SetItem(v919, *(_QWORD *)v1444, v918);
  PyDict_SetItem(v919, qword_384ECB0, &PyUnicode_Type);
  PyDict_SetItem(v919, qword_384E7D0, &PyUnicode_Type);
  PyDict_SetItem(v919, qword_384F498, &PyUnicode_Type);
  v920 = sub_C2AC0((int)sub_1C56050, qword_384ECA8, 0, qword_390DFA0, 0, 0, v919, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384ECA8, v920);
  v921 = sub_CB210(qword_384F5E8);
  v922 = sub_C2AC0((int)sub_1C61710, qword_384EBD8, 0, qword_390DFA8, 0, 0, v921, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EBD8, v922);
  v923 = qword_384E6E0;
  v1445 = (_QWORD *)qword_384EB28;
  v924 = (_QWORD *)PyDict_NewPresized(11LL);
  PyDict_SetItem(v924, v923, &PyUnicode_Type);
  PyDict_SetItem(v924, *(_QWORD *)&qword_384D6E0, &PyLong_Type);
  PyDict_SetItem(v924, *(_QWORD *)&qword_384D6E8, &PyUnicode_Type);
  PyDict_SetItem(v924, *(_QWORD *)&qword_384D6F8, &PyUnicode_Type);
  PyDict_SetItem(v924, qword_384E360, &PyDict_Type);
  PyDict_SetItem(v924, *(_QWORD *)&qword_384D700, &PyUnicode_Type);
  PyDict_SetItem(v924, qword_384E7D8, &PyBool_Type);
  v925 = qword_384E7E0;
  v926 = sub_1C66470();
  if ( !v926 )
  {
    sub_C5700(a1, &v1548, qword_384EFA8);
    v29 = (*v924)-- == 1LL;
    if ( v29 )
    {
      v959 = v924;
      v760 = 1463;
      sub_95CC0(v959);
      v758 = v1549;
    }
    else
    {
      v758 = v1549;
      v760 = 1463;
    }
    goto LABEL_838;
  }
  PyDict_SetItem(v924, v925, v926);
  PyDict_SetItem(v924, qword_384E7E8, &PyList_Type);
  PyDict_SetItem(v924, qword_384F5F0, &PyBool_Type);
  PyDict_SetItem(v924, qword_384F498, &Py_NoneStruct);
  v927 = qword_390DFB0;
  v928 = qword_384EAF8;
  ++*v1445;
  v929 = sub_C2AC0((int)sub_1C90C40, v928, 0, v927, (int)v1445, 0, (__int64)v924, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EAF8, v929);
  v930 = sub_CB210(qword_384F5F8);
  v931 = sub_C2AC0((int)sub_1C880A0, qword_384EDA8, 0, qword_390DFB8, 0, 0, v930, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EDA8, v931);
  v932 = qword_384E6E0;
  v933 = (_QWORD *)PyDict_NewPresized(12LL);
  PyDict_SetItem(v933, v932, &PyUnicode_Type);
  PyDict_SetItem(v933, *(_QWORD *)&qword_384D6E0, &PyLong_Type);
  PyDict_SetItem(v933, qword_384EE38, &PyList_Type);
  PyDict_SetItem(v933, *(_QWORD *)&qword_384D710, &PyUnicode_Type);
  PyDict_SetItem(v933, *(_QWORD *)&qword_384D6F8, &PyUnicode_Type);
  PyDict_SetItem(v933, *(_QWORD *)&qword_384D700, &PyUnicode_Type);
  PyDict_SetItem(v933, *(_QWORD *)&qword_384D708, &PyUnicode_Type);
  PyDict_SetItem(v933, qword_384E7E8, &PyList_Type);
  PyDict_SetItem(v933, qword_384E7D8, &PyBool_Type);
  PyDict_SetItem(v933, qword_384EFE0, &PyLong_Type);
  v934 = qword_384E7E0;
  v935 = sub_1C66470();
  if ( !v935 )
  {
    sub_C5700(a1, &v1548, qword_384EFA8);
    v29 = (*v933)-- == 1LL;
    if ( v29 )
    {
      v958 = v933;
      v760 = 1607;
      sub_95CC0(v958);
      v758 = v1549;
    }
    else
    {
      v758 = v1549;
      v760 = 1607;
    }
    goto LABEL_838;
  }
  PyDict_SetItem(v933, v934, v935);
  PyDict_SetItem(v933, qword_384F498, &Py_NoneStruct);
  v936 = sub_C2AC0((int)sub_1C86AE0, qword_384EFD8, 0, qword_390DFC0, 0, 0, (__int64)v933, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EFD8, v936);
  v937 = sub_CB210(qword_384F600);
  v938 = sub_C2AC0((int)sub_1C68B20, qword_384EF98, 0, qword_390DFC8, 0, 0, v937, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EF98, v938);
  v939 = qword_384E7E0;
  v940 = sub_1C66470();
  if ( !v940 )
  {
    v760 = 1646;
    sub_C5700(a1, &v1548, qword_384EFA8);
    v758 = v1549;
    goto LABEL_838;
  }
  v941 = PyDict_NewPresized(2LL);
  PyDict_SetItem(v941, v939, v940);
  PyDict_SetItem(v941, qword_384F498, &Py_NoneStruct);
  v942 = sub_C2AC0((int)sub_1C6B7F0, qword_384EFB0, 0, qword_390DFD0, 0, 0, v941, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EFB0, v942);
  v943 = sub_CB210(qword_384F608);
  v944 = sub_C2AC0((int)sub_1C8D580, qword_384EFA0, 0, qword_390DFD8, 0, 0, v943, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EFA0, v944);
  v945 = sub_CB210(qword_384F610);
  v946 = sub_C2AC0((int)sub_1C666F0, qword_384EF70, 0, qword_390DFE0, 0, 0, v945, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EF70, v946);
  v947 = qword_384EE78;
  v948 = sub_1C663F0();
  if ( !v948 )
  {
    v760 = 1693;
    sub_C5700(a1, &v1548, qword_384EDC8);
    v758 = v1549;
    goto LABEL_838;
  }
  v949 = PyDict_NewPresized(2LL);
  PyDict_SetItem(v949, v947, v948);
  PyDict_SetItem(v949, qword_384F498, &Py_NoneStruct);
  v950 = sub_C2AC0((int)sub_1C6A000, qword_384EF88, 0, qword_390DFE8, 0, 0, v949, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384EF88, v950);
  v951 = sub_C2AC0((int)sub_1C7B210, qword_384F618, 0, qword_390DFF0, 0, 0, 0LL, qword_390DC08, 0LL, 0LL, 0LL);
  sub_D6010(qword_390DC10, *(_QWORD *)&qword_384F618, v951);
  v952 = (_QWORD *)sub_C4A20(qword_390DC10, *(_QWORD *)&qword_384F618);
  if ( !v952 || (v953 = (_QWORD *)*v952) == 0LL )
  {
    v957 = (_QWORD *)sub_C4A20(qword_384F848, *(_QWORD *)&qword_384F618);
    v953 = v957;
    if ( v957 )
      v953 = (_QWORD *)*v957;
  }
  *(_DWORD *)(v12 + 108) = 1812;
  v954 = (_QWORD *)sub_B1A80(a1, v953);
  if ( !v954 )
  {
    v955 = a1[11];
    v758 = (_QWORD *)a1[13];
    a1[11] = 0LL;
    v760 = 1812;
    a1[13] = 0LL;
    v1548.m128i_i64[0] = v955;
    v956 = a1[12];
    v1549 = v758;
    v1548.m128i_i64[1] = v956;
    a1[12] = 0LL;
    goto LABEL_838;
  }
  v29 = (*v954)-- == 1LL;
  if ( v29 )
    sub_95CC0(v954);
  sub_D5FD0(v1490);
  result = qword_390DC08;
  ++*(_QWORD *)qword_390DC08;
  return result;
}
