//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface IDSDMessageStoreMap : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;	// 8 = 0x8
    NSMutableDictionary *_messageStores;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x004000000056f880
- (void).cxx_destruct;	// IMP=0x002000000056fee0
@property(readonly, copy) NSArray *messageStores;
- (id)getOrCreateMessageStoreForDataProtectionClass:(unsigned int)arg1;	// IMP=0x001000000056faa0
- (void)dealloc;	// IMP=0x001000000056fa50
- (id)init;	// IMP=0x001000000056f940

@end

