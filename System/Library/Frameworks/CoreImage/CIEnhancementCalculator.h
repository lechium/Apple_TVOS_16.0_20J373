//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CIEnhancementCalculator
{
    _Bool faceBalanceEnabled;	// 112 = 0x70
    _Bool vibranceEnabled;	// 113 = 0x71
    _Bool curvesEnabled;	// 114 = 0x72
    _Bool shadowsEnabled;	// 115 = 0x73
}

@property _Bool shadowsEnabled; // @synthesize shadowsEnabled;
@property _Bool curvesEnabled; // @synthesize curvesEnabled;
@property _Bool vibranceEnabled; // @synthesize vibranceEnabled;
@property _Bool faceBalanceEnabled; // @synthesize faceBalanceEnabled;
- (void)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 features:(id)arg3;	// IMP=0x00000000001c440a
- (id)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 detectorOpts:(id)arg3;	// IMP=0x00000000001c4390
- (void)analyzeFeatures:(id)arg1 usingContext:(id)arg2 baseImage:(id)arg3;	// IMP=0x00000000001c3dc8
- (void)setupHistogramsUsing:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4;	// IMP=0x00000000001c3875
- (id)histogramFromRows:(id)arg1 componentOffset:(unsigned int)arg2;	// IMP=0x00000000001c36fd
- (void)dealloc;	// IMP=0x00000000001c36ce
- (id)init;	// IMP=0x00000000001c3670

@end

