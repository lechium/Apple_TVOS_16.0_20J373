//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionAwarenessClientConfig : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _notifyToken;	// 16 = 0x10
    NSMutableDictionary *_notifyQueues;	// 24 = 0x18
    NSMutableDictionary *_notifyBlocks;	// 32 = 0x20
    unsigned long long _supportedEvents;	// 40 = 0x28
    _Bool _supportedEventsValid;	// 48 = 0x30
    unsigned long long _nextTagIndex;	// 56 = 0x38
    NSMutableDictionary *_tagMap;	// 64 = 0x40
    NSMutableDictionary *_tagRefCount;	// 72 = 0x48
}

+ (id)sharedClientConfig;	// IMP=0x00600000000136b0
- (void).cxx_destruct;	// IMP=0x00000000000122fa
- (void)decrementTagIndexRefCount:(unsigned long long)arg1;	// IMP=0x00000000000122a6
- (void)incrementTagIndexRefCount:(unsigned long long)arg1;	// IMP=0x0000000000012252
- (id)tagForIndex:(unsigned long long)arg1;	// IMP=0x0000000000012187
- (unsigned long long)addTag:(id)arg1;	// IMP=0x00000000000120b8
- (void)cancelNotification:(struct AWNotification_s *)arg1;	// IMP=0x0000000000012069
- (struct AWNotification_s *)notifySupportedEventsChangedWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011f6a
- (void)updateState:(_Bool)arg1;	// IMP=0x0000000000011c33
- (unsigned long long)supportedEvents;	// IMP=0x0000000000011ba9
- (void)dealloc;	// IMP=0x0000000000011b70
- (id)init;	// IMP=0x00000000000119aa

@end
