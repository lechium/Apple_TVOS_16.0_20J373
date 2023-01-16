//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSSet;

@interface DownloadPolicyChangeset : NSObject
{
    int _changesetType;	// 8 = 0x8
    MISSING_TYPE *_downloadProperties;	// 16 = 0x10
    long long _networkType;	// 24 = 0x18
    NSSet *_policyIDs;	// 32 = 0x20
}

@property(copy, nonatomic) NSSet *policyIdentifiers; // @synthesize policyIdentifiers=_policyIDs;
@property(nonatomic) long long networkType; // @synthesize networkType=_networkType;
@property(copy, nonatomic) NSDictionary *downloadPropertiesForStoppedDownloads; // @synthesize downloadPropertiesForStoppedDownloads=_downloadProperties;
@property(nonatomic) int changesetType; // @synthesize changesetType=_changesetType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000016dcb6
- (void)dealloc;	// IMP=0x001000000016dc6c
- (id)initWithPolicyIdentifiers:(id)arg1;	// IMP=0x001000000016dc15

@end

