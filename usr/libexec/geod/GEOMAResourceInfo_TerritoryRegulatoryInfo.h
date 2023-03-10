//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MAAssetQuery, MADownloadOptions, NSString, NSURL;

@interface GEOMAResourceInfo_TerritoryRegulatoryInfo
{
}

+ (id)_defaultQueryParameters;	// IMP=0x0020000000033d0f
+ (id)_defaultQueryType;	// IMP=0x0010000000033d02
+ (id)allExisitngInfos;	// IMP=0x0010000000033ad0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0020000000033deb
@property(readonly) unsigned long long hash;
- (_Bool)shouldPrefetchResource:(id)arg1;	// IMP=0x0010000000033dd9
@property(readonly, nonatomic) MADownloadOptions *downloadOptions;
@property(readonly, nonatomic) double timeToLive;
@property(readonly, nonatomic) unsigned long long policy;
- (id)init;	// IMP=0x0010000000033a28

// Remaining properties
@property(readonly, nonatomic) NSURL *baseURL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) double lastAccessedTime;
@property(readonly, nonatomic) MAAssetQuery *query;
@property(readonly) Class superclass;

@end

