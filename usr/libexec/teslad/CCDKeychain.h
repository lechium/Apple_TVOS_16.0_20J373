//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CCDKeychain : NSObject
{
}

+ (struct __CFDictionary *)_newQueryWithService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(_Bool)arg6 outError:(id *)arg7;	// IMP=0x0040000000007991
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 useSystemKeychain:(_Bool)arg8 sysBound:(_Bool)arg9 outError:(id *)arg10;	// IMP=0x001000000000751a
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(_Bool)arg6 outError:(id *)arg7;	// IMP=0x00100000000072f4
+ (id)dataFromString:(id)arg1;	// IMP=0x00100000000072da

@end

