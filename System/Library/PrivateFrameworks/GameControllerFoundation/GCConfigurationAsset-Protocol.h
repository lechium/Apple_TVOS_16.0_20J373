//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameControllerFoundation/NSObject-Protocol.h>

@class GCVersion, NSString;

@protocol GCConfigurationAsset <NSObject>
@property(readonly) long long contentRevision;
@property(readonly) GCVersion *contentVersion;
@property(readonly) GCVersion *compatibilityVersion;
@property(readonly) NSString *assetState;
@property(readonly) NSString *assetId;
@end
