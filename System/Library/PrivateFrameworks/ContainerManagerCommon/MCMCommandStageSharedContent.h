//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMCommandStageSharedContent
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_sourceRelativePath;	// 16 = 0x10
    NSString *_destinationRelativePath;	// 24 = 0x18
}

+ (Class)incomingMessageClass;	// IMP=0x001000000004bb87
+ (unsigned long long)command;	// IMP=0x001000000004bb51
- (void).cxx_destruct;	// IMP=0x000000000004baec
@property(readonly, nonatomic) NSString *destinationRelativePath; // @synthesize destinationRelativePath=_destinationRelativePath;
@property(readonly, nonatomic) NSString *sourceRelativePath; // @synthesize sourceRelativePath=_sourceRelativePath;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)execute;	// IMP=0x000000000004a85e
- (_Bool)preflightClientAllowed;	// IMP=0x000000000004a7c5
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x000000000004a6af

@end
