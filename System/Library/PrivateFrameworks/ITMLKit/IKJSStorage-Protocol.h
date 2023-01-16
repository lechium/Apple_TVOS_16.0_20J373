//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/JSExport-Protocol.h>

@class NSString;

@protocol IKJSStorage <JSExport>
@property(readonly, nonatomic) unsigned long long length;
- (void)clear;
- (void)removeItem:(NSString *)arg1;
- (void)setItem:(NSString *)arg1:(NSString *)arg2;
- (NSString *)getItem:(NSString *)arg1;
- (NSString *)key:(unsigned long long)arg1;
@end

