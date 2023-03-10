//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCVersion, NSString;

__attribute__((visibility("hidden")))
@interface GCConfigurationAssetXPCProxy : NSObject
{
    NSString *_assetId;	// 8 = 0x8
    NSString *_assetState;	// 16 = 0x10
    GCVersion *_compatibilityVersion;	// 24 = 0x18
    GCVersion *_contentVersion;	// 32 = 0x20
    long long _contentRevision;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001d6b8
- (void).cxx_destruct;	// IMP=0x000000000001db84
@property(readonly) long long contentRevision; // @synthesize contentRevision=_contentRevision;
@property(readonly) GCVersion *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(readonly) GCVersion *compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(readonly) NSString *assetState; // @synthesize assetState=_assetState;
@property(readonly) NSString *assetId; // @synthesize assetId=_assetId;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d9ee
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d89a
- (id)init;	// IMP=0x000000000001d86f
- (id)initWithAsset:(id)arg1;	// IMP=0x000000000001d6c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

