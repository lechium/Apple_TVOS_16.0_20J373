//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAsset;

@interface CKDDownloadAssetURLInfo : NSObject
{
    CKAsset *_asset;	// 8 = 0x8
    struct _OpaquePCSShareProtection *_recordPCS;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002ee2cc
@property(nonatomic) struct _OpaquePCSShareProtection *recordPCS; // @synthesize recordPCS=_recordPCS;
@property(retain, nonatomic) CKAsset *asset; // @synthesize asset=_asset;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ee1bb
- (unsigned long long)hash;	// IMP=0x00000000002ee177
- (void)dealloc;	// IMP=0x00000000002ee130

@end

