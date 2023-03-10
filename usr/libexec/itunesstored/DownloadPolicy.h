//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSMemoryEntity.h>

@class NSData, SSDownloadPolicy;

@interface DownloadPolicy : SSMemoryEntity
{
    SSDownloadPolicy *_cachedPolicy;	// 8 = 0x8
}

+ (id)defaultProperties;	// IMP=0x002000000016c7bb
+ (Class)databaseEntityClass;	// IMP=0x001000000016c7aa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x002000000016c7e2
@property(copy, nonatomic) NSData *policyData;
@property(readonly, nonatomic) SSDownloadPolicy *downloadPolicy;
- (void)dealloc;	// IMP=0x001000000016c531

@end

