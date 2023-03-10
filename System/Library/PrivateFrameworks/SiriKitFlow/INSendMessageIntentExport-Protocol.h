//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriKitFlow/JSExport-Protocol.h>
#import <SiriKitFlow/NSObject-Protocol.h>

@class INPerson, INSpeakableString, NSArray, NSString;

@protocol INSendMessageIntentExport <NSObject, JSExport>
@property(nonatomic, copy) NSString *alternativeConversationIdentifier;
@property(nonatomic, copy) NSString *notificationThreadIdentifier;
@property(nonatomic, copy) NSArray *attachments;
@property(nonatomic) long long effect;
@property(nonatomic, copy) INPerson *sender;
@property(nonatomic, copy) NSString *serviceName;
@property(nonatomic, copy) NSString *conversationIdentifier;
@property(nonatomic, copy) INSpeakableString *speakableGroupName;
@property(nonatomic, copy) NSString *content;
@property(nonatomic) long long outgoingMessageType;
@property(nonatomic, copy) NSArray *recipients;
- (id)init;
@end

