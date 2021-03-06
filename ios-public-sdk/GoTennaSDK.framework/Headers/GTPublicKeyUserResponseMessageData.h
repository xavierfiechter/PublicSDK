//
//  GTPublicKeyUserResponseMessageData.h
//  goTenna SDK
//
//  Created by Thomas Colligan on 2/16/16.
//  Copyright © 2016 goTenna. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GTMessageDataProtocol.h"
#import "GTBaseMessageData.h"

@interface GTPublicKeyUserResponseMessageData : GTBaseMessageData<GTMessageDataProtocol>

@property (nonatomic, strong) NSData *publicKey;

@end
