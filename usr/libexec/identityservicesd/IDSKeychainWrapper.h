//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSKeychainWrapper : NSObject
{
}

+ (long long)idsKeychainWrapperDataProtectionClassFromIMDataProtectionClass:(unsigned int)arg1;	// IMP=0x0040000000090b70
+ (unsigned int)imDataProtectionClassFromDataProtectionClass:(long long)arg1;	// IMP=0x0010000000090b50
+ (id)descriptionForDataProtectionClass:(long long)arg1;	// IMP=0x0010000000090ab0
+ (id)shortDescriptionForDataProtectionClass:(long long)arg1;	// IMP=0x0010000000090a10
+ (_Bool)isInteractionNotAllowedError:(id)arg1;	// IMP=0x00100000000909a0
+ (_Bool)isUpgradePendingError:(id)arg1;	// IMP=0x0010000000090930
+ (_Bool)isItemNotFoundError:(id)arg1;	// IMP=0x00100000000908c0
+ (_Bool)_isKeychainError:(id)arg1 withOSStatus:(int)arg2;	// IMP=0x0010000000090700
- (long long)cloudCircleStatusError:(id *)arg1;	// IMP=0x0040000000091f00
- (_Bool)isInCloudCircleWithError:(id *)arg1;	// IMP=0x0010000000091b10
- (id)_keychainAccountFromBaseIdentifier:(id)arg1;	// IMP=0x0010000000091aa0
- (_Bool)removeDataForIdentifier:(id)arg1 dataProtectionClass:(long long)arg2 error:(id *)arg3;	// IMP=0x0010000000091950
- (void)saveData:(id)arg1 forIdentifier:(id)arg2 dataProtectionClass:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000091640
- (_Bool)saveData:(id)arg1 forIdentifier:(id)arg2 allowSync:(_Bool)arg3 allowBackup:(_Bool)arg4 dataProtectionClass:(long long)arg5 error:(id *)arg6;	// IMP=0x00100000000911b0
- (_Bool)saveData:(id)arg1 forIdentifier:(id)arg2 allowSync:(_Bool)arg3 dataProtectionClass:(long long)arg4 error:(id *)arg5;	// IMP=0x00100000000910e0
- (id)dataForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000090c10
- (id)dataForIdentifier:(id)arg1;	// IMP=0x0010000000090b90

@end
