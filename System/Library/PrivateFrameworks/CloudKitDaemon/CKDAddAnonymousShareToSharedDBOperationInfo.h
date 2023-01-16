//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSDictionary;

@interface CKDAddAnonymousShareToSharedDBOperationInfo : CKDatabaseOperationInfo
{
    NSDictionary *_encryptedAnonymousSharesToAdd;	// 8 = 0x8
    CDUnknownBlockType _anonymousShareSavedBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003130ab
@property(copy, nonatomic) CDUnknownBlockType anonymousShareSavedBlock; // @synthesize anonymousShareSavedBlock=_anonymousShareSavedBlock;
@property(retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd; // @synthesize encryptedAnonymousSharesToAdd=_encryptedAnonymousSharesToAdd;

@end

