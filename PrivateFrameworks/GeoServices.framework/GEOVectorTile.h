/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVectorTile : NSObject {
    GEOFeatureStyleAttributes *_attributes;
    NSMutableData *_baseHeightsPool;
    struct { struct { struct { id x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; BOOL x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; unsigned int x2; unsigned int x3; BOOL x4; BOOL x5; } *_buildingFootprints;
    unsigned int _buildingFootprintsCount;
    unsigned int _coastlineCharacteristicPointCount;
    struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; } *_coastlineCharacteristicPoints;
    struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; unsigned int x7; struct { /* ? */ } *x8; struct _NSRange {} *x9; } *_coastlineVertices;
    struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; } *_coastlines;
    unsigned int _coastlinesCount;
    struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; } *_curveLineVertices;
    unsigned int *_curveToLineMapping;
    struct { BOOL x1; unsigned int x2; id *x3; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; oneway void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; unsigned short x27; void*x28; short x29; void*x30; void*x31; void*x32; void*x33; unsigned long x34; int x35; unsigned int x36/* : ? */; const void*x37; const void*x38; void*x39; void*x40; const int x41; void x42; void*x43; void*x44; void*x45; void*x46; const void*x47; void*x48; void*x49; void*x50; out const void*x51; short x52; void*x53; unsigned short x54; void*x55; const int x56; in void*x57; bool x58; out void*x59; const double x60; void*x61; unsigned int x62; void*x63; float x64; const void*x65; void*x66; void*x67; void*x68; out const void*x69; void*x70; unsigned short x71; void*x72; const int x73; in void*x74; bool x75; out void*x76; const double x77; void*x78; unsigned int x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; oneway void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; BOOL x186; void*x187; void*x188; int x189; in unsigned short x190; void*x191; in BOOL x192; unsigned short x193; void*x194; void*x195; void*x196; void*x197; unsigned char x198; out in void*x199; const out long x200; long x201; void*x202; const void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; oneway void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; unsigned char x222; void*x223; unsigned short x224; void*x225; short x226; void*x227; void*x228; void*x229; void*x230; unsigned long x231; int x232; unsigned int x233/* : ? */; const void*x234; const void*x235; void*x236; void*x237; const int x238; void x239; void*x240; void*x241; void*x242; void*x243; const void*x244; void*x245; void*x246; void*x247; out const void*x248; short x249; void*x250; void*x251; const void*x252; float x253; void*x254; const void*x255; in BOOL x256; void*x257; short x258; void*x259; float x260; const void*x261; void*x262; void*x263; void*x264; out const void*x265; void*x266; void*x267; const void*x268; float x269; void*x270; const void*x271; in BOOL x272; void*x273; short x274; void*x275; void*x276; void*x277; void*x278; void*x279; unsigned long x280; void*x281; void*x282; void*x283; void*x284; void*x285; long long x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; } *_extendedPointAttributes;
    unsigned int _extendedPointAttributesCount;
    NSMutableData *_extrusionHeightsPool;
    struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; unsigned int x7; struct { /* ? */ } *x8; struct _NSRange {} *x9; } *_footprintVertices;
    BOOL _hasComputedJunctions;
    struct { struct { struct { id x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; BOOL x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; unsigned int x2; unsigned int x3; BOOL x4; BOOL x5; } *_hiResBuildingFootprints;
    unsigned int _hiResBuildingFootprintsCount;
    struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; unsigned int x7; struct { /* ? */ } *x8; struct _NSRange {} *x9; } *_hiResFootprintVertices;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; } *_junctions;
    unsigned int _junctionsCount;
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    } _key;
    struct { char *x1; char *x2; unsigned int x3; } *_labelIndex;
    unsigned int _labelIndexCount;
    NSData *_labelPool;
    struct { unsigned int x1; unsigned int x2; char *x3; } *_labelPoolLanguages;
    unsigned int _labelPoolLanguagesLength;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_laneConnections;
    unsigned int _laneConnectionsCount;
    struct { float x1; float x2; float x3; float x4; float x5; float x6; } *_laneGeometry;
    unsigned int _lineCharacteristicPointCount;
    struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; } *_lineCharacteristicPoints;
    struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; unsigned int x7; struct { /* ? */ } *x8; struct _NSRange {} *x9; } *_lineVertices;
    struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; } *_lines;
    unsigned int _linesCount;
    unsigned int _linesVertexCount;
    struct { unsigned int x1; unsigned int x2; unsigned char x3; } *_localizationTable;
    unsigned int _localizationTableCount;
    NSMutableData *_localizedLabelPool;
    char *_localizedLabelsLanguage;
    struct { unsigned short x1; } *_overpasses;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_pointsOnRoad;
    unsigned int _pointsOnRoadCount;
    struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; } x3; unsigned char x4; unsigned char x5; unsigned char x6; struct { /* ? */ } *x7; BOOL x8; } *_pois;
    unsigned int _poisCount;
    unsigned int _polygonCharacteristicPointCount;
    struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; } *_polygonCharacteristicPoints;
    struct { float x1; float x2; } *_polygonLabelPositions;
    unsigned int _polygonLabelPositionsCount;
    struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; unsigned int x7; struct { /* ? */ } *x8; struct _NSRange {} *x9; } *_polygonVertices;
    struct { struct { struct { id x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; BOOL x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; BOOL x3; BOOL x4; BOOL x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; } x8; } *_polygons;
    unsigned int _polygonsCount;
    unsigned int _polygonsVertexCount;
    struct GEOFeatureShield { struct { char *x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; } x1; long long x2; } *_shieldIndex;
    unsigned int _shieldIndexCount;
    struct { /* ? */ } **_sortedPointsOnRoad;
    struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; char *x2; unsigned int x3; } *_threeDBuildings;
    unsigned int _threeDBuildingsCount;
    unsigned int _tileReferenceCount;
    struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; } *_tileReferences;
    NSMutableOrderedSet *_uniqueAttributes;
    NSMutableArray *_uniqueFeatureAttributes;
}

@property (nonatomic, readonly) struct { struct { struct { id x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; BOOL x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; unsigned int x2; unsigned int x3; BOOL x4; BOOL x5; }*buildingFootprints;
@property (nonatomic, readonly) unsigned int buildingFootprintsCount;
@property (nonatomic, readonly) unsigned int coastlineCharacteristicPointCount;
@property (nonatomic, readonly) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*coastlineCharacteristicPoints;
@property (nonatomic, readonly) struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*coastlines;
@property (nonatomic, readonly) unsigned int coastlinesCount;
@property (nonatomic, readonly) struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; }*curveLineVertices;
@property (nonatomic, readonly) BOOL dataIncludesConnectivity;
@property (nonatomic, readonly) BOOL hasComputedJunctions;
@property (nonatomic, readonly) struct { struct { struct { id x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; BOOL x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; unsigned int x2; unsigned int x3; BOOL x4; BOOL x5; }*hiResBuildingFootprints;
@property (nonatomic, readonly) unsigned int hiResBuildingFootprintsCount;
@property (nonatomic, readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*junctions;
@property (nonatomic, readonly) unsigned int junctionsCount;
@property (nonatomic, readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*laneConnections;
@property (nonatomic, readonly) unsigned int laneConnectionsCount;
@property (nonatomic, readonly) unsigned int lineCharacteristicPointCount;
@property (nonatomic, readonly) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*lineCharacteristicPoints;
@property (nonatomic, readonly) struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; unsigned int x7; struct { /* ? */ } *x8; struct _NSRange {} *x9; }*lineVertices;
@property (nonatomic, readonly) struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*lines;
@property (nonatomic, readonly) unsigned int linesCount;
@property (nonatomic, readonly) unsigned int linesVertexCount;
@property (nonatomic, readonly) struct { unsigned short x1; }*overpasses;
@property (nonatomic, readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*pointsOnRoad;
@property (nonatomic, readonly) unsigned int pointsOnRoadCount;
@property (nonatomic, readonly) struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; } x3; unsigned char x4; unsigned char x5; unsigned char x6; struct { /* ? */ } *x7; BOOL x8; }*pois;
@property (nonatomic, readonly) unsigned int poisCount;
@property (nonatomic, readonly) unsigned int polygonCharacteristicPointCount;
@property (nonatomic, readonly) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*polygonCharacteristicPoints;
@property (nonatomic, readonly) struct { struct { struct { id x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; BOOL x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; BOOL x3; BOOL x4; BOOL x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; } x8; }*polygons;
@property (nonatomic, readonly) unsigned int polygonsCount;
@property (nonatomic, readonly) unsigned int polygonsVertexCount;
@property (nonatomic, readonly) struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; char *x2; unsigned int x3; }*threeDBuildings;
@property (nonatomic, readonly) unsigned int threeDBuildingsCount;
@property (nonatomic, readonly) struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; } tileKey;
@property (nonatomic, readonly) unsigned int tileReferenceCount;
@property (nonatomic, readonly) struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*tileReferences;

- (BOOL)_addGenericPolygonWithAttributes:(int*)arg1;
- (void)_attachRoadPoints;
- (void)_findJunctions;
- (void)_findOverpasses;
- (BOOL)_handleGenericTile:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1;
- (id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3;
- (unsigned int)_makeSpaceForLabels:(unsigned int)arg1;
- (unsigned int)_makeSpaceForShields:(unsigned int)arg1;
- (BOOL)_read3DBuildings:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1;
- (BOOL)_readCoastlines:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1;
- (BOOL)_readExtendedPointAttributes:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1;
- (BOOL)_readHighResBuildings:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1;
- (BOOL)_readInfoChapter:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1 key:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (BOOL)_readLabels:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1;
- (BOOL)_readLines:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1;
- (BOOL)_readLowResBuildings:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1;
- (BOOL)_readModernBuildings:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1 chapter:(unsigned short)arg2 vertexPool:(struct { /* ? */ }**)arg3 footprints:(struct { /* ? */ }**)arg4 count:(unsigned int*)arg5;
- (BOOL)_readPois:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1;
- (BOOL)_readPolygons:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1;
- (BOOL)_readPolygons:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1 ofType:(unsigned short)arg2;
- (BOOL)_readSimpleCoastlines:(struct { unsigned char x1; struct { char *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; bool x3; char *x4; unsigned int x5; unsigned int x6; }*)arg1 tile:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg2;
- (BOOL)_readTileReferences:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg1 key:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (BOOL)_readWrappingCoastlines:(struct { unsigned char x1; struct { char *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; bool x3; char *x4; unsigned int x5; unsigned int x6; }*)arg1 tile:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; bool x_7_1_2; } x7; }*)arg2;
- (void)_trimWhitespace;
- (id)addAttributes:(id)arg1 toUniqueAttributeSet:(id)arg2;
- (id)baseHeightsPool;
- (struct { struct { struct { id x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; BOOL x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; unsigned int x2; unsigned int x3; BOOL x4; BOOL x5; }*)buildingFootprints;
- (unsigned int)buildingFootprintsCount;
- (unsigned int)coastlineCharacteristicPointCount;
- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*)coastlineCharacteristicPoints;
- (struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)coastlines;
- (unsigned int)coastlinesCount;
- (struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; }*)curveLineVertices;
- (BOOL)dataIncludesConnectivity;
- (void)dealloc;
- (id)description;
- (id)extrusionHeightsPool;
- (void)forEachEdgeInRoad:(struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)arg1 visitTwice:(BOOL)arg2 visitor:(id /* block */)arg3;
- (void)forEachEdgeOnJunction:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)arg1 visitor:(id /* block */)arg2;
- (void)forEachJunction:(id /* block */)arg1;
- (void)forEachJunctionInRoad:(struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)arg1 visitor:(id /* block */)arg2;
- (void)forEachPoint:(id /* block */)arg1;
- (void)forEachPolygon:(id /* block */)arg1;
- (void)forEachRoad:(id /* block */)arg1;
- (BOOL)hasComputedJunctions;
- (struct { struct { struct { id x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; BOOL x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; unsigned int x2; unsigned int x3; BOOL x4; BOOL x5; }*)hiResBuildingFootprints;
- (unsigned int)hiResBuildingFootprintsCount;
- (id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)junctions;
- (unsigned int)junctionsCount;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)laneConnections;
- (unsigned int)laneConnectionsCount;
- (unsigned int)lineCharacteristicPointCount;
- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*)lineCharacteristicPoints;
- (struct { unsigned char x1; struct { /* ? */ } *x2; unsigned int x3; float *x4; struct _NSRange {} *x5; unsigned int x6; unsigned int x7; struct { /* ? */ } *x8; struct _NSRange {} *x9; }*)lineVertices;
- (struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)lines;
- (unsigned int)linesCount;
- (unsigned int)linesVertexCount;
- (struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)multiSectionFeatureForGeoID:(unsigned long long)arg1;
- (struct { unsigned short x1; }*)overpasses;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)pointsOnRoad;
- (unsigned int)pointsOnRoadCount;
- (struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; } x3; unsigned char x4; unsigned char x5; unsigned char x6; struct { /* ? */ } *x7; BOOL x8; }*)pois;
- (unsigned int)poisCount;
- (unsigned int)polygonCharacteristicPointCount;
- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*)polygonCharacteristicPoints;
- (struct { float x1; float x2; }*)polygonLabelPositions;
- (struct { struct { struct { id x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; BOOL x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; BOOL x3; BOOL x4; BOOL x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; } x8; }*)polygons;
- (unsigned int)polygonsCount;
- (unsigned int)polygonsVertexCount;
- (struct { /* ? */ }**)sortedPointsOnRoad;
- (struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; char *x2; unsigned int x3; }*)threeDBuildings;
- (unsigned int)threeDBuildingsCount;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })tileKey;
- (unsigned int)tileReferenceCount;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)tileReferences;

@end
