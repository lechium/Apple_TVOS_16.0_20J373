//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (MTMaterialDescriptionInternal)
- (void)sortFiltersWithOrder:(id)arg1;	// IMP=0x00900000000186c1
- (void)setZoom:(double)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;	// IMP=0x009000000001864c
- (void)setColorMatrix:(struct CAColorMatrix)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;	// IMP=0x00900000000184e5
- (void)setBrightness:(double)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;	// IMP=0x00900000000183e9
- (void)setSaturation:(double)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;	// IMP=0x00900000000182ed
- (void)setAverageColorEnabled:(_Bool)arg1 includingOptimizations:(_Bool)arg2 withAdditionalInfoPromise:(CDUnknownBlockType)arg3;	// IMP=0x0090000000018219
- (void)setBlurRadius:(double)arg1 inputMaskImage:(struct CGImage *)arg2 ignoringIdentity:(_Bool)arg3 includingOptimizations:(_Bool)arg4 withAdditionalInfoPromise:(CDUnknownBlockType)arg5;	// IMP=0x0090000000017fef
- (void)setLuminanceAmount:(double)arg1 values:(id)arg2 ignoringIdentity:(_Bool)arg3 includingOptimizations:(_Bool)arg4 withAdditionalInfoPromise:(CDUnknownBlockType)arg5;	// IMP=0x0090000000017e7a
- (void)setTintColor:(id)arg1 includingOptimizations:(_Bool)arg2 withAdditionalInfoPromise:(CDUnknownBlockType)arg3;	// IMP=0x0090000000017d3a
- (void)_processAdditionalInfo:(id)arg1 forFilter:(id)arg2;	// IMP=0x0090000000017b65
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofFilter:(id)arg3;	// IMP=0x00900000000177fb
@end
