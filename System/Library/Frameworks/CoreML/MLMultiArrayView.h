//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MLMultiArray.h"

__attribute__((visibility("hidden")))
@interface MLMultiArrayView : MLMultiArray
{
    MLMultiArray *_parent;	// 24 = 0x18
}

+ (void)squeezeShape:(id)arg1 strides:(id)arg2 resultingShape:(id *)arg3 resultingStrides:(id *)arg4;	// IMP=0x0060000000037e2c
+ (_Bool)isSqueezableShape:(id)arg1 dimensions:(id)arg2;	// IMP=0x0060000000037bdb
+ (_Bool)isSqueezableShape:(id)arg1;	// IMP=0x0060000000037aff
- (void).cxx_destruct;	// IMP=0x0000000000037aec
@property(readonly, nonatomic) MLMultiArray *parent; // @synthesize parent=_parent;
- (id)initExpandingDimensionsOfMultiArray:(id)arg1 axis:(long long)arg2;	// IMP=0x0000000000037446
- (id)initSqueezingMultiArray:(id)arg1 dimensions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000036dd6
- (id)initSlicingMultiArray:(id)arg1 origin:(id)arg2 shape:(id)arg3 squeeze:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000036887

@end

