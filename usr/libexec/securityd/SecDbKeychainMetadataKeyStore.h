//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SecDbKeychainMetadataKeyStore : NSObject
{
    int _keybagNotificationToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_keysDict;	// 24 = 0x18
}

+ (_Bool)cachingEnabled;	// IMP=0x00400000001ca038
+ (id)sharedStore;	// IMP=0x00100000001c9f5a
+ (void)resetSharedStore;	// IMP=0x00100000001c9f23
- (void).cxx_destruct;	// IMP=0x00200000001c934c
@property int keybagNotificationToken; // @synthesize keybagNotificationToken=_keybagNotificationToken;
@property(retain) NSMutableDictionary *keysDict; // @synthesize keysDict=_keysDict;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)keyForKeyclass:(int)arg1 keybag:(int)arg2 keySpecifier:(id)arg3 allowWrites:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00100000001c8ed5
- (id)fetchKeyForClass:(int)arg1 fromDb:(struct __OpaqueSecDbConnection *)arg2 keybag:(int)arg3 specifier:(id)arg4 allowWrites:(_Bool)arg5 error:(id *)arg6;	// IMP=0x00100000001c8c3d
- (_Bool)readKeyDataForClass:(int)arg1 fromDb:(struct __OpaqueSecDbConnection *)arg2 actualKeyclass:(int *)arg3 wrappedKey:(id *)arg4 error:(id *)arg5;	// IMP=0x00100000001c8a1b
- (id)writeKey:(id)arg1 ForKeyclass:(int)arg2 withKeybag:(int)arg3 keySpecifier:(id)arg4 database:(struct __OpaqueSecDbConnection *)arg5 error:(id *)arg6;	// IMP=0x00100000001c8631
- (id)newKeyForKeyclass:(int)arg1 withKeybag:(int)arg2 keySpecifier:(id)arg3 database:(struct __OpaqueSecDbConnection *)arg4 error:(id *)arg5;	// IMP=0x00100000001c8552
- (id)validateWrappedKey:(id)arg1 forKeyClass:(int)arg2 actualKeyClass:(int *)arg3 keybag:(int)arg4 keySpecifier:(id)arg5 error:(id *)arg6;	// IMP=0x00100000001c8198
- (void)_onQueueDropAllKeys;	// IMP=0x00100000001c8111
- (void)dropAllKeys;	// IMP=0x00100000001c80c6
- (void)_onQueueDropClassAKeys;	// IMP=0x00100000001c8008
- (void)dropClassAKeys;	// IMP=0x00100000001c7fbd
- (void)dealloc;	// IMP=0x00100000001c7f78
- (id)_init;	// IMP=0x00100000001c7e28

@end

