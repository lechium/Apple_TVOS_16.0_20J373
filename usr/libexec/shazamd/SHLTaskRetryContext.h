//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHLTaskOutcome;

@interface SHLTaskRetryContext : NSObject
{
    SHLTaskOutcome *_outcome;	// 8 = 0x8
    CDUnknownBlockType _retryBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003c899
@property(readonly, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(readonly, nonatomic) SHLTaskOutcome *outcome; // @synthesize outcome=_outcome;
- (id)initWithOutcome:(id)arg1 retryBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c7e2

@end

