//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol IKJSDataObservable <JSExport>
- (void)touchPropertyPath:(NSString *)arg1;
- (JSValue *)getPropertyPath:(NSString *)arg1;
- (void)setPropertyPath:(NSString *)arg1:(JSValue *)arg2;
@end
