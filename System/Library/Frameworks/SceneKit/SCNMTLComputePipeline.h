//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLComputePipelineState, MTLFunction;

__attribute__((visibility("hidden")))
@interface SCNMTLComputePipeline : NSObject
{
    id <MTLComputePipelineState> _state;	// 8 = 0x8
    id <MTLFunction> _computeFunction;	// 16 = 0x10
}

@property(retain, nonatomic) id <MTLFunction> computeFunction; // @synthesize computeFunction=_computeFunction;
@property(retain, nonatomic) id <MTLComputePipelineState> state; // @synthesize state=_state;
- (id)description;	// IMP=0x0000000000117ac7
- (void)dealloc;	// IMP=0x0000000000117a7d
- (id)init;	// IMP=0x0000000000117a4e

@end

