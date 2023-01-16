//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DownloadsDatabase, NSMutableDictionary;

@interface DownloadPolicyManager : NSObject
{
    DownloadsDatabase *_database;	// 8 = 0x8
    NSMutableDictionary *_policies;	// 16 = 0x10
    NSMutableDictionary *_sizeLimitOverrides;	// 24 = 0x18
}

@property(readonly, nonatomic) __weak DownloadsDatabase *downloadsDatabase; // @synthesize downloadsDatabase=_database;
- (long long)_sizeLimitForPolicy:(id)arg1 networkType:(long long)arg2;	// IMP=0x001000000016d94b
- (_Bool)_isPolicyRuleSatisfied:(id)arg1 forPolicy:(id)arg2 networkType:(long long)arg3;	// IMP=0x001000000016d8f7
- (_Bool)_isPolicyRuleNetworkTypeAllowed:(id)arg1 networkType:(long long)arg2;	// IMP=0x001000000016d875
- (_Bool)_isPolicyRuleCellularDataAllowed:(id)arg1 networkType:(long long)arg2;	// IMP=0x001000000016d67a
- (void)_initializePolicy;	// IMP=0x001000000016d32a
- (void)_addPolicy:(id)arg1;	// IMP=0x001000000016d126
- (void)setOverrideDownloadSizeLimit:(long long)arg1 forDownloadIdentifier:(long long)arg2;	// IMP=0x001000000016d07d
- (void)removeOverrideDownloadSizeLimitForDownloadIdentifier:(long long)arg1;	// IMP=0x001000000016cfec
- (id)overrideDownloadSizeLimitForDownloadIdentifier:(long long)arg1;	// IMP=0x001000000016cf7e
- (long long)downloadSizeLimitForPolicyWithID:(long long)arg1 networkType:(long long)arg2;	// IMP=0x001000000016ceeb
- (long long)downloadSizeLimitForPolicyWithID:(long long)arg1;	// IMP=0x001000000016ce99
- (id)downloadPolicyForID:(long long)arg1;	// IMP=0x001000000016ce2d
- (long long)addDownloadPolicy:(id)arg1;	// IMP=0x001000000016c942
- (void)dealloc;	// IMP=0x001000000016c8f8
- (id)initWithDownloadsDatabase:(id)arg1;	// IMP=0x001000000016c849
- (id)init;	// IMP=0x001000000016c811

@end

