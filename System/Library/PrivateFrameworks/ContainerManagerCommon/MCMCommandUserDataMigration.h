//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMCommandUserDataMigration
{
}

+ (Class)incomingMessageClass;	// IMP=0x00800000000399cc
+ (unsigned long long)command;	// IMP=0x0080000000039996
- (_Bool)_bundleContainerExistsForDataContainer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003ac39
- (int)_intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)arg1;	// IMP=0x000000000003abba
- (void)_setDataProtectionIfNecessaryOnContainer:(id)arg1;	// IMP=0x000000000003a6cd
- (void)execute;	// IMP=0x0000000000039aa1
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000039a08

@end

