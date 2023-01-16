//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface SagaCloudAddItemOperation
{
    long long _adamID;	// 8 = 0x8
    long long _referralAlbumAdamID;	// 16 = 0x10
    NSString *_referralPlaylistGlobalID;	// 24 = 0x18
    NSDictionary *_adamIDToSagaIDMap;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000d4151
- (void).cxx_destruct;	// IMP=0x00200000000d2b3e
@property(retain, nonatomic) NSDictionary *adamIDToSagaIDMap; // @synthesize adamIDToSagaIDMap=_adamIDToSagaIDMap;
- (void)removePendingAddedItemsForPermanentlyFailedOperation;	// IMP=0x00100000000d2a1e
- (void)processAddedItems:(id)arg1;	// IMP=0x00100000000d2567
- (void)logCloudAddRequestDescription;	// IMP=0x00100000000d24c8
- (id)cloudAddRequestWithDatabaseID:(unsigned int)arg1;	// IMP=0x00100000000d2457
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000d23da
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000d2360
- (id)initWithConfiguration:(id)arg1 adamID:(long long)arg2 referralPlaylistGlobalID:(id)arg3 clientIdentity:(id)arg4;	// IMP=0x00100000000d22e7
- (id)initWithConfiguration:(id)arg1 adamID:(long long)arg2 referralAlbumAdamID:(long long)arg3 clientIdentity:(id)arg4;	// IMP=0x00100000000d22b7
- (id)initWithConfiguration:(id)arg1 adamID:(long long)arg2 clientIdentity:(id)arg3;	// IMP=0x00100000000d2270

@end
