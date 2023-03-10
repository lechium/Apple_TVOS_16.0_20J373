//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ADSystemService
{
    struct __CFDictionary *_commandMap;	// 8 = 0x8
    struct __CFDictionary *_commandMapV2;	// 16 = 0x10
}

- (void)handleResponse:(id)arg1 toCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0020000000099309
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000987ce
- (id)controlCenterLockRestrictedCommands;	// IMP=0x00100000000987c6
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00100000000986e4
- (id)commandsForDomain:(id)arg1;	// IMP=0x00100000000985c1
- (id)domains;	// IMP=0x0010000000098571
- (id)handle;	// IMP=0x0010000000098568
- (_Bool)isSystemService;	// IMP=0x0010000000098560
- (id)_systemDomains;	// IMP=0x00100000000984b3
- (void)dealloc;	// IMP=0x0010000000098458
- (id)init;	// IMP=0x0010000000098405

@end

