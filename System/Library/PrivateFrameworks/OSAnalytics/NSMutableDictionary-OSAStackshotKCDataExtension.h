//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (OSAStackshotKCDataExtension)
- (void)addWaitInfoDesc:(const void *)arg1 count:(unsigned int)arg2 elSize:(unsigned int)arg3;	// IMP=0x0070000000002c44
- (void)addTurnstileInfoDesc:(const void *)arg1 count:(unsigned int)arg2 elSize:(unsigned int)arg3;	// IMP=0x0070000000002a2f
- (_Bool)osa_logCounter_isLog:(id)arg1 byKey:(id)arg2 count:(unsigned long long *)arg3 withinLimit:(unsigned long long *)arg4 withOptions:(id)arg5;	// IMP=0x0070000000036ecb
- (void)osa_logCounter_recordNixedDuplicate:(const char *)arg1;	// IMP=0x0070000000036e3f
- (unsigned long long)osa_logCounter_getForSubtype:(id)arg1 forOwner:(id)arg2;	// IMP=0x0070000000036cbb
- (void)osa_logCounter_countLogTypes_internal:(id)arg1 forOwner:(id)arg2;	// IMP=0x00700000000365d3
- (void)osa_logCounter_incrementForSubtype:(id)arg1 signature:(id)arg2 filepath:(const char *)arg3;	// IMP=0x0070000000036539
- (void)osa_logCounter_incrementForSubtype_internal:(id)arg1 signature:(id)arg2 filepath:(const char *)arg3;	// IMP=0x00700000000361d2
@end

