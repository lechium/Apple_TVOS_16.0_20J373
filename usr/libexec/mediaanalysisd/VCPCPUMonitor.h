//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface VCPCPUMonitor : NSObject
{
    NSMutableDictionary *_requests;	// 8 = 0x8
    int _requestID;	// 16 = 0x10
}

+ (id)sharedCPUMonitor;	// IMP=0x004000000000dbdb
- (void).cxx_destruct;	// IMP=0x002000000000e6ce
- (void)cancelRequest:(int)arg1;	// IMP=0x001000000000e14a
- (int)disableWithTimeoutSeconds:(int)arg1;	// IMP=0x001000000000dd0b
- (void)dealloc;	// IMP=0x001000000000dc30
- (id)init;	// IMP=0x001000000000db50

@end
