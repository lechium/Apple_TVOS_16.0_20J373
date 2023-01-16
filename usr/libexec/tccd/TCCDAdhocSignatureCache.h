//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSFileManager, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TCCDAdhocSignatureCache : NSObject
{
    NSMutableDictionary *_keys;	// 8 = 0x8
    NSCache *_signatures;	// 16 = 0x10
    unsigned long long _capacity;	// 24 = 0x18
    NSString *_directoryPath;	// 32 = 0x20
    NSString *_keysPath;	// 40 = 0x28
    NSFileManager *_fileManager;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000026e66
- (void)addSignature:(id)arg1 forStaticCode:(struct __SecCode *)arg2;	// IMP=0x0010000000026a2c
- (id)getSignatureForStaticCode:(struct __SecCode *)arg1;	// IMP=0x0010000000026518
- (void)maintainSize;	// IMP=0x0010000000025d4c
- (id)cacheKeyForStaticCode:(struct __SecCode *)arg1;	// IMP=0x0010000000025701
- (void)saveSignature:(id)arg1 withUUID:(id)arg2;	// IMP=0x00100000000255ed
- (id)loadSignatureWithUUID:(id)arg1;	// IMP=0x00100000000254e9
- (void)saveKeysToDirectory;	// IMP=0x001000000002538b
- (void)loadKeysFromDirectory;	// IMP=0x0010000000025169
- (void)createStateHandler;	// IMP=0x0010000000024d3f
- (id)stateDump;	// IMP=0x0010000000024a47
- (id)init;	// IMP=0x0010000000024a39
- (id)initWithDirectoryPath:(id)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00100000000247e2
- (id)logHandle;	// IMP=0x00100000000247b2

@end

