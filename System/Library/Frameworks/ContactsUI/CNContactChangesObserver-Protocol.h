//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, NSString;

@protocol CNContactChangesObserver <NSObject>
- (void)contactDidChange:(CNContact *)arg1;

@optional
- (void)contactWithIdentifierWasDeleted:(NSString *)arg1;
@end

