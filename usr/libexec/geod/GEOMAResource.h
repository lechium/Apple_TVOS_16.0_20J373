//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAsset, NSDictionary, NSString, NSURL;
@protocol GEOMAResourceInfo;

@interface GEOMAResource : NSObject
{
    MAAsset *_asset;	// 8 = 0x8
    NSDictionary *_attributes;	// 16 = 0x10
    NSURL *_cacheURL;	// 24 = 0x18
    id <GEOMAResourceInfo> _info;	// 32 = 0x20
}

+ (void)onFileAccessQueueAsync:(CDUnknownBlockType)arg1;	// IMP=0x004000000002087b
+ (void)onFileAccessQueueSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000002082b
+ (_Bool)_removeResourceAt:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000205df
+ (_Bool)removeResourceAt:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000020357
- (void).cxx_destruct;	// IMP=0x00200000000208f3
@property(readonly) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly) id <GEOMAResourceInfo> resourceInfo; // @synthesize resourceInfo=_info;
- (id)description;	// IMP=0x0010000000020732
- (_Bool)remove:(id *)arg1;	// IMP=0x00100000000202f4
- (void)_relocateOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001fa75
- (void)downloadWithOptions:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f4f2
- (void)downloadWithOptions:(id)arg1;	// IMP=0x001000000001f4db
- (unsigned long long)hash;	// IMP=0x001000000001f497
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001f3e9
- (long long)compare:(id)arg1;	// IMP=0x001000000001f242
@property(readonly, nonatomic) NSString *contentVersion;
- (unsigned long long)size;	// IMP=0x001000000001f176
- (id)getLocalFileUrl;	// IMP=0x001000000001f10a
- (id)_getPlistURL;	// IMP=0x001000000001f0b3
- (id)_getLocalFileUrl;	// IMP=0x001000000001f013
@property(readonly) long long state;
@property(readonly, getter=isOnDisk) _Bool onDisk;
@property(readonly, getter=isAvailableForUse) _Bool availableForUse;
@property(readonly, nonatomic) NSString *assetId;
- (id)initWithResourceFolder:(id)arg1 info:(id)arg2;	// IMP=0x001000000001ecad
- (id)initWithMobileAsset:(id)arg1 info:(id)arg2;	// IMP=0x001000000001ebda

@end

