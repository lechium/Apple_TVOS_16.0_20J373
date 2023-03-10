//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol CalPreferencesStore
- (void)synchronizeDomain:(NSString *)arg1;
- (void)setValue:(id)arg1 forDomain:(NSString *)arg2 key:(NSString *)arg3;
- (_Bool)getValue:(id *)arg1 forDomain:(NSString *)arg2 key:(NSString *)arg3;
- (_Bool)getInteger:(long long *)arg1 forDomain:(NSString *)arg2 key:(NSString *)arg3;
- (_Bool)getBoolean:(_Bool *)arg1 forDomain:(NSString *)arg2 key:(NSString *)arg3;
@end

