//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLDebugInstrumentationData, MTLDebugSubProgram;

__attribute__((visibility("hidden")))
@interface MTLDebugLocation : NSObject
{
    MTLDebugInstrumentationData *_data;	// 8 = 0x8
    struct DebugLocation *_debugLoc;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x00000000000524e1
- (oneway void)releaseInternal;	// IMP=0x00000000000524b2
- (oneway void)release;	// IMP=0x00000000000524ac
- (id)retain;	// IMP=0x00000000000524a3
- (id)description;	// IMP=0x000000000005248f
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000052239
@property(readonly, nonatomic) MTLDebugLocation *inlinedAt;
@property(readonly, nonatomic) unsigned int column;
@property(readonly, nonatomic) unsigned int line;
@property(readonly, nonatomic) MTLDebugSubProgram *scope;

@end

