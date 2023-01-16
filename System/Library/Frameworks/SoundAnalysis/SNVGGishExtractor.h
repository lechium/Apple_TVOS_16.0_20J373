//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNVGGishExtractor : NSObject
{
    shared_ptr_f6ac7592 _graph;	// 8 = 0x8
    unsigned int _blockSize;	// 24 = 0x18
}

+ (id)windowDurationConstraint;	// IMP=0x0010000000005dbb
+ (CDStruct_1b6d18a9)defaultWindowDuration;	// IMP=0x0010000000005cd4
+ (unsigned int)sampleRate;	// IMP=0x0010000000005c18
+ (id)resultsBoxName;	// IMP=0x0010000000005c0b
+ (id)createWithSampleRate:(double)arg1 windowDuration:(CDStruct_1b6d18a9)arg2 overlapFactor:(float)arg3 error:(id *)arg4;	// IMP=0x0010000000005187
- (id).cxx_construct;	// IMP=0x0000000000005f13
- (void).cxx_destruct;	// IMP=0x0000000000005f05
@property(readonly, nonatomic) unsigned int blockSize; // @synthesize blockSize=_blockSize;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) void *resultsBox;
- (id)initWithOverlapFactor:(float)arg1 error:(id *)arg2;	// IMP=0x00000000000051c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
