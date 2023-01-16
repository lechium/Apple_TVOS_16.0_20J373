//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MLGeluActivationBrick : NSObject
{
    unsigned long long _size;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;	// IMP=0x00000000000fe29e
- (_Bool)hasGPUSupport;	// IMP=0x00000000000fe296
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000fe28d
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;	// IMP=0x00000000000fe0c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

