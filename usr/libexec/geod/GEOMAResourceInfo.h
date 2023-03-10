//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GEOMAResourceInfo : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSDictionary *_queryParameters;	// 16 = 0x10
}

+ (id)baseURLForType:(unsigned long long)arg1;	// IMP=0x00400000000324ca
+ (id)maResourcesFolder;	// IMP=0x0010000000032460
- (void).cxx_destruct;	// IMP=0x0020000000033a18
- (id)description;	// IMP=0x001000000003376e
- (void)_listResources:(_Bool)arg1 queue:(id)arg2 results:(CDUnknownBlockType)arg3;	// IMP=0x00100000000330db
- (void)listResources:(_Bool)arg1 queue:(id)arg2 results:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032fab
- (id)installedResources;	// IMP=0x0010000000032ac7
- (id)query;	// IMP=0x0010000000032889
- (id)_backgroundDownloadOptions;	// IMP=0x001000000003282f
- (_Bool)isExpired;	// IMP=0x0010000000032744
- (void)updateLastAccessedTime;	// IMP=0x00100000000326f5
- (double)lastAccessedTime;	// IMP=0x0010000000032572
- (id)baseURL;	// IMP=0x001000000003254a
- (id)initWithType:(unsigned long long)arg1 overrides:(id)arg2;	// IMP=0x001000000003228c

@end

