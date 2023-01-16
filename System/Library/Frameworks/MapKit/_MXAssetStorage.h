//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MXAssetStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_lock;	// 8 = 0x8
    NSMutableDictionary *_storage;	// 16 = 0x10
    NSMutableSet *_loadingKeys;	// 24 = 0x18
    NSMutableDictionary *_fetchBlocks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000da4cf
- (void)fetchAssetForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000da233
- (void)setAsset:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000d9e3a
- (void)loadAssetForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d9ccd
- (id)init;	// IMP=0x00000000000d9c02

@end

