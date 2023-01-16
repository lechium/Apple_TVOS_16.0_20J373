//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore;

@interface OTAccountsActualAdapter : NSObject
{
    ACAccountStore *_store;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000163819
@property(retain, nonatomic) ACAccountStore *store; // @synthesize store=_store;
- (id)inflateAllTPSpecificUsers:(id)arg1 octagonContextID:(id)arg2;	// IMP=0x00100000001634d5
- (id)findAccountForCurrentThread:(id)arg1 optionalAltDSID:(id)arg2 cloudkitContainerName:(id)arg3 octagonContextID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000016269a
- (id)fetchAccountsRetryingWithError:(id *)arg1;	// IMP=0x0010000000162438
- (_Bool)isErrorRetryable:(id)arg1;	// IMP=0x0010000000162386
- (void)setAccountStore:(id)arg1;	// IMP=0x0010000000162374

@end

