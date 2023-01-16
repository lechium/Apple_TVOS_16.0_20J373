//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VSAsyncOperation.h"

@class NSArray, VSAccountStore, VSOptional;

__attribute__((visibility("hidden")))
@interface VSCredentialSaveOperation : VSAsyncOperation
{
    VSOptional *_result;	// 8 = 0x8
    NSArray *_unsavedAccounts;	// 16 = 0x10
    VSAccountStore *_accountStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004142b
@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(copy, nonatomic) NSArray *unsavedAccounts; // @synthesize unsavedAccounts=_unsavedAccounts;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void)executionDidBegin;	// IMP=0x000000000004121d
- (void)_didSaveAccounts:(id)arg1 withResult:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000041103
- (id)initWithUnsavedAccounts:(id)arg1 accountStore:(id)arg2;	// IMP=0x0000000000040fd9
- (id)init;	// IMP=0x0000000000040f6a

@end
