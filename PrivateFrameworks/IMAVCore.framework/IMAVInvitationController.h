/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVInvitationController : NSObject  {
}

+ (void)setDelegate:(id)arg1;
+ (id)delegate;
+ (id)curentAVChatConnectedDate;
+ (id)curentAVChatRemoteUserID;
+ (unsigned int)currentAVChatEndedReason;
+ (unsigned int)currentAVChatState;
+ (void)sendResponse:(unsigned int)arg1 toInvitationRequestFromBuddy:(id)arg2 forConference:(id)arg3;
+ (void)setupIMAVInvitationController;
+ (void)declineInvitationRequestFromBuddy:(id)arg1 forConference:(id)arg2;
+ (void)acceptInvitationRequestFromBuddy:(id)arg1 forConference:(id)arg2;
+ (void)_markSetup;


@end