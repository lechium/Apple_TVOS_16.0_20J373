//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMCommandCreateOrLookupAppGroupByAppGroupIdentifier
{
    NSString *_appGroupIdentifier;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x0010000000077bbc
+ (unsigned long long)command;	// IMP=0x0010000000077b86
- (void).cxx_destruct;	// IMP=0x0000000000077b48
@property(readonly, nonatomic) NSString *appGroupIdentifier; // @synthesize appGroupIdentifier=_appGroupIdentifier;
- (void)execute;	// IMP=0x0000000000077500
- (_Bool)preflightClientAllowed;	// IMP=0x00000000000773c9
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x000000000007730d

@end

