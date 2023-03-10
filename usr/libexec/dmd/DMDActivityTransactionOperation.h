//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_os_transaction;

@interface DMDActivityTransactionOperation
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x004000000000f0b4
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000000f082
+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000ef58
- (void).cxx_destruct;	// IMP=0x002000000000f1ee
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (void)runWithRequest:(id)arg1;	// IMP=0x001000000000f14f
- (void)endOperationIfNeeded;	// IMP=0x001000000000f116
- (void)cancel;	// IMP=0x001000000000f0c9
- (_Bool)runOnMainThread;	// IMP=0x001000000000f0c1
- (_Bool)runConcurrently;	// IMP=0x001000000000ef50

@end

