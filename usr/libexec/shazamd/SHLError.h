//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SHLError : NSObject
{
}

+ (id)localizedRecoverySuggestionForSyncError:(long long)arg1;	// IMP=0x004000000001e084
+ (id)localizedFailureReasonForSyncError:(long long)arg1;	// IMP=0x001000000001e060
+ (id)localizedDescriptionForSyncError:(long long)arg1;	// IMP=0x001000000001e03c
+ (long long)errorCodeForError:(id)arg1;	// IMP=0x001000000001df8a
+ (id)userInfoForErrorCode:(long long)arg1 withUnderlyingError:(id)arg2;	// IMP=0x001000000001de2a
+ (id)errorCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x001000000001ddbd
+ (_Bool)canRetryForPartialError:(id)arg1;	// IMP=0x001000000001dcc0
+ (_Bool)canRetryForError:(id)arg1;	// IMP=0x001000000001dba5
+ (double)retrySecondsForError:(id)arg1;	// IMP=0x001000000001d8c7
+ (id)errorWithUnderlyingError:(id)arg1;	// IMP=0x001000000001d84c
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x001000000001d833
+ (id)errorWithCode:(long long)arg1;	// IMP=0x001000000001d818

@end
