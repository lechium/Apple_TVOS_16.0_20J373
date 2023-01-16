//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HomeKitCKError)
+ (id)errorWithSQLite3Statement:(struct sqlite3_stmt *)arg1;	// IMP=0x0020000000701abc
+ (id)errorWithSQLite3Context:(struct sqlite3 *)arg1 statement:(const char *)arg2;	// IMP=0x002000000070192f
+ (id)errorWithSQLite3Context:(struct sqlite3 *)arg1;	// IMP=0x00200000007017dd
+ (id)hmd_HTTPMessageTransportErrorWithCode:(long long)arg1;	// IMP=0x002000000092cfbf
+ (id)hmPrivateErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0020000000a1efba
+ (id)hmPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0020000000a1ef9c
+ (id)hmInternalErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0020000000a1ef76
+ (id)hmPrivateErrorWithCode:(long long)arg1;	// IMP=0x0020000000a1ef50
+ (id)hmInternalErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0020000000a1ee76
+ (id)hmInternalErrorWithCode:(long long)arg1;	// IMP=0x0020000000a1ee5b
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0020000000a1ee35
+ (id)hmErrorWithCode:(long long)arg1;	// IMP=0x0020000000a1ee1a
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;	// IMP=0x0020000000a1edf7
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;	// IMP=0x0020000000a1eb5c
@property(readonly, copy) NSError *hmd_convertedCKError;
@property(readonly, getter=hmd_isNonRecoverableCKError) _Bool hmd_nonRecoverableCKError;
@property(readonly, getter=hmd_isCKError) _Bool hmd_ckError;
@property(readonly, copy) NSError *hmd_hmErrorFromCKError;
@property(readonly, copy) NSError *hmd_conciseCKError;
- (id)hmd_actualCKErrorFromCKErrorPartialFailure:(id)arg1;	// IMP=0x00100000003dbe9f
@property(readonly, copy, nonatomic) NSError *hmPublicError;
@property(readonly, nonatomic, getter=isHMError) _Bool hmError;
@end
