//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMCommandGetCodeSignMapping
{
    NSString *_identifier;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x0010000000091cf1
+ (unsigned long long)command;	// IMP=0x0010000000091cbb
- (void).cxx_destruct;	// IMP=0x0000000000091c7d
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)execute;	// IMP=0x0000000000091a1a
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000091981
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x00000000000918c5

@end

