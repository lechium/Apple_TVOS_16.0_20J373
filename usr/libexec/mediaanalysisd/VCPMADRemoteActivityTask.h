//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaAnalysis/VCPMABaseTask.h>

@class NSXPCConnection;

@interface VCPMADRemoteActivityTask : VCPMABaseTask
{
    unsigned long long _activityType;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
}

+ (id)taskWithActivityType:(unsigned long long)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x002000000009a662
- (void).cxx_destruct;	// IMP=0x002000000009b690
- (_Bool)run:(id *)arg1;	// IMP=0x001000000009aaa4
- (void)updateProgress:(double)arg1;	// IMP=0x001000000009a9bc
- (id)connection;	// IMP=0x001000000009a6e1
- (id)initWithActivityType:(unsigned long long)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a61b

@end

