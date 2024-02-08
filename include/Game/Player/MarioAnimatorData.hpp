#pragma once

XanimeQuadBckTable quadAnimeTable[7] = {
    {
        "��{", //animationName
        "WalkSoft", //fileName1
        0.00000f, // _8
        "Walk", //fileName2
        0.00000f, // _10
        "Run", //fileName3
        0.00000f, // _18
        "Wait", //fileName4
        1.00000f, // _20
    },
    {
        "���j��{", //animationName
        "SwimWait", //fileName1
        1.00000f, // _8
        "SwimFlutterSurface", //fileName2
        0.00000f, // _10
        "SwimFlutter", //fileName3
        0.00000f, // _18
        "SwimDrift", //fileName4
        0.00000f, // _20
    },
    {
        "�e�j�X��{", //animationName
        "WalkSoft", //fileName1
        0.00000f, // _8
        "Walk", //fileName2
        0.00000f, // _10
        "TennisRun", //fileName3
        0.00000f, // _18
        "TennisWait", //fileName4
        1.00000f, // _20
    },
    {
        "�X���C�_�[�K", //animationName
        "SlideHipForWard", //fileName1
        0.300000f, // _8
        "SlideHipBackward", //fileName2
        0.200000f, // _10
        "SlideHipLeft", //fileName3
        0.250000f, // _18
        "SlideHipRight", //fileName4
        0.250000f, // _20
    },
    {
        "�₷�ׂ艺���������ނ�", //animationName
        "SlideHipForWard", //fileName1
        0.300000f, // _8
        "SlideHipBackward", //fileName2
        0.200000f, // _10
        "SlideHipLeft", //fileName3
        0.250000f, // _18
        "SlideHipRight", //fileName4
        0.250000f, // _20
    },
    {
        "�^�}�R���ړ�", //animationName
        "BallIdle", //fileName1
        1.00000f, // _8
        "BallWalkSoft", //fileName2
        0.00000f, // _10
        "BallWalk", //fileName3
        0.00000f, // _18
        "BallRun", //fileName4
        0.00000f, // _20
    },
    {
        "", //animationName
        "", //fileName1
        0.00000f, // _8
        nullptr, //fileName2
        0.00000f, // _10
        nullptr, //fileName3
        0.00000f, // _18
        nullptr, //fileName4
        0.00000f, // _20
    },
};

XanimeTripleBckTable tripleAnimeTable[8] = {
    {
        "�⍶�E�E�G�C�g", //animationName
        "Wait", //fileName1
        1.00000f, // _8
        "WaitSlopeL", //fileName2
        0.00000f, // _10
        "WaitSlopeR", //fileName3
        0.00000f, // _18
    },
    {
        "��O��E�G�C�g", //animationName
        "Wait", //fileName1
        1.00000f, // _8
        "WaitSlopeD", //fileName2
        0.00000f, // _10
        "WaitSlopeU", //fileName3
        0.00000f, // _18
    },
    {
        "�T�[�t�B��", //animationName
        "SurfRideLoop", //fileName1
        1.00000f, // _8
        "SurfRideLoopL", //fileName2
        0.00000f, // _10
        "SurfRideLoopR", //fileName3
        0.00000f, // _18
    },
    {
        "�T�[�t�B���i�����j", //animationName
        "SurfRideDashLoop", //fileName1
        1.00000f, // _8
        "SurfRideDashLoopL", //fileName2
        0.00000f, // _10
        "SurfRideDashLoopR", //fileName3
        0.00000f, // _18
    },
    {
        "�T�[�t�B���X���J�n", //animationName
        "SurfRide", //fileName1
        1.00000f, // _8
        "SurfRideL", //fileName2
        0.00000f, // _10
        "SurfRideR", //fileName3
        0.00000f, // _18
    },
    {
        "�T�[�t�B���X���J�n�i�����j", //animationName
        "SurfRideDash", //fileName1
        1.00000f, // _8
        "SurfRideDashL", //fileName2
        0.00000f, // _10
        "SurfRideDashR", //fileName3
        0.00000f, // _18
    },
    {
        "�T�[�t�B������", //animationName
        "SurfFall", //fileName1
        1.00000f, // _8
        "SurfFallL", //fileName2
        0.00000f, // _10
        "SurfFallR", //fileName3
        0.00000f, // _18
    },
    {
        "", //animationName
        "", //fileName1
        0.00000f, // _8
        nullptr, //fileName2
        0.00000f, // _10
        nullptr, //fileName3
        0.00000f, // _18
    },
};

XanimeDoubleBckTable doubleAnimeTable[4] = {
    {
        "���Ⴊ�݊�{", //animationName
        "SquatWait", //fileName1
        1.00000f, // _8
        "SquatWalk", //fileName2
        0.00000f, // _10
    },
    {
        "���̏ꑫ����", //animationName
        "Run", //fileName1
        0.750000f, // _8
        "Wait", //fileName2
        0.250000f, // _10
    },
    {
        "�^�}�R�����Ⴊ��", //animationName
        "BallSquat", //fileName1
        1.00000f, // _8
        "BallWalk", //fileName2
        0.00000f, // _10
    },
    {
        "", //animationName
        "", //fileName1
        0.00000f, // _8
        nullptr, //fileName2
        0.00000f, // _10
    },
};

XanimeSingleBckTable singleAnimeTable[0x124] = {
    {
        "�W�����v", //animationName
        "Jump", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�W�����vB", //animationName
        "Jump2", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�W�����vC", //animationName
        "JumpRoll", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�^�[���W�����v", //animationName
        "JumpTurn", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�󒆈��]", //animationName
        "AirControl", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t���[�W�����v", //animationName
        "Rise", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�w���R�v�^�[�W�����v", //animationName
        "FlickAir", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�_�b�V���W�����v", //animationName
        "Rolling", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "��т�����W�����v", //animationName
        "Bounce", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�V���[�g�W�����v", //animationName
        "GravityChange", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�J�C���u�W�����v", //animationName
        "JumpTwin", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�P�L��", //animationName
        "Bury", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�P�L���E�o", //animationName
        "Bury", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���܂�", //animationName
        "BuryStandWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���܂�E�o", //animationName
        "BuryStandEnd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t���n", //animationName
        "CannonFlyLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�z�b�p�[�W�����vA", //animationName
        "HopperWaitA", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�z�b�p�[�W�����vB", //animationName
        "HopperWaitB", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�z�b�p�[�ӂ݃W�����vA", //animationName
        "HopperWaitA", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�z�b�p�[�ӂ݃W�����vB", //animationName
        "HopperWaitB", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�z�b�p�[�ړ�A", //animationName
        "HopperRunA", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�z�b�p�[�ړ�B", //animationName
        "HopperRunB", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�z�b�p�[�n�C�W�����vA", //animationName
        "HopperJumpA", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�z�b�p�[�n�C�W�����vB", //animationName
        "HopperJumpB", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�z�b�p�[�ǃW�����v", //animationName
        "HopperWallJump", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�z�b�p�[�q�b�v�h���b�v�J�n", //animationName
        "HopperMarioHipDropStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�z�b�p�[�q�b�v�h���b�v", //animationName
        "HopperMarioHipDrop", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�W�����v�ӂ�1", //animationName
        "Jump", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�W�����v�ӂ�2", //animationName
        "JumpPress2nd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�W�����v�ӂ�3", //animationName
        "JumpPress3rd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�����߂�", //animationName
        "PullBack", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�����߂����n", //animationName
        "PullBackLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�|�b�h���[�v�J�n", //animationName
        "WarpPodStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�|�b�h���[�v�I��", //animationName
        "WarpPodEnd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���Ƃ�", //animationName
        "JumpBroad", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���n", //animationName
        "Land", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���nB", //animationName
        "Jump2Land", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���nC", //animationName
        "JumpRollLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���n�^�[��", //animationName
        "JumpTurnLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���n���Ƃ�", //animationName
        "JumpBroadLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�[�h���n", //animationName
        "LandStiffen", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���ׂ蒅�n", //animationName
        "LandSlope", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�V���[�g���n", //animationName
        "Land", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�q�b�v�h���b�v�J�n", //animationName
        "HipDropStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�q�b�v�h���b�v", //animationName
        "HipDrop", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�q�b�v�h���b�v���n", //animationName
        "HipDropLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�q�b�v�h���b�v����", //animationName
        "LandRotation", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�W�����v������", //animationName
        "LandRotation", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�W�����v�t����", //animationName
        "Fall", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���q�b�v�h���b�v�J�n", //animationName
        "HipDropHomingStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���q�b�v�h���b�v", //animationName
        "HipDropHoming", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���q�b�v�h���b�v���n", //animationName
        "HipDropHomingLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X���b�v�A�b�v", //animationName
        "SlipUp", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���܂�X���b�v�A�b�v����", //animationName
        "HangSlipUpStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���܂�X���b�v�A�b�v", //animationName
        "HangSlipUp", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`��s��", //animationName
        "BeeFly", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`��s��������", //animationName
        "BeeFlyWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�ǂ�����", //animationName
        "BeeLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�ǂ�������", //animationName
        "BeeWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�Ԉړ�", //animationName
        "BeeCreepWallWalk", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�W�����v", //animationName
        "BeeJump", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�ǃW�����v", //animationName
        "BeeWallJump", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�����E�G�C�g", //animationName
        "BeeCreepWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�����O�i", //animationName
        "BeeCreepWalk", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�������n", //animationName
        "BeeCreepLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�q�b�v�h���b�v�J�n", //animationName
        "BeeHipDropStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�q�b�v�h���b�v", //animationName
        "BeeHipDrop", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�q�b�v�h���b�v���n", //animationName
        "BeeHipDropLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�q�b�v�h���b�v�ǒ��n", //animationName
        "BeeHipDropLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�D�ᑬ���s", //animationName
        "WalkSoft", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�D�������s", //animationName
        "WalkBury", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����", //animationName
        "Fall", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t�[�t�@�C�^�[��s�J�n", //animationName
        "FooStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t�[�t�@�C�^�[��s", //animationName
        "FooFly", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t�[�t�@�C�^�[��s�ĊJ", //animationName
        "FooFlyStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t�[�t�@�C�^�[�Î~", //animationName
        "FooWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t�[�t�@�C�^�[����", //animationName
        "FooEnd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t�[�t�@�C�^�[���n", //animationName
        "LandSlope", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t�[�t�@�C�^�[�X�s��", //animationName
        "FooSpin", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�ǃW�����v", //animationName
        "WallJump", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�ǂ��ׂ�", //animationName
        "WallSlide", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�ǂ�����", //animationName
        "WallKeep", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�ǉ���", //animationName
        "Push", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�Ǎ�����", //animationName
        "WallWalkL", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�ǉE����", //animationName
        "WallWalkR", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�ǃE�G�C�g", //animationName
        "WallWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�O�ǃE�G�C�g", //animationName
        "Push", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�ǃq�b�g", //animationName
        "WallHit", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�ǃq�b�g���n", //animationName
        "WallHitLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�ǂ͂���", //animationName
        "WallHit", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�R�ӂ�΂�", //animationName
        "Stagger", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�J���J�����E", //animationName
        "WaitHold", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�⍶�E�G�C�g", //animationName
        "WaitSlopeL", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "��E�E�G�C�g", //animationName
        "WaitSlopeR", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "��O�E�G�C�g", //animationName
        "WaitSlopeD", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���E�G�C�g", //animationName
        "WaitSlopeU", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����", //animationName
        "Run", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���s", //animationName
        "Walk", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�ݍs", //animationName
        "WalkSoft", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���^���_�b�V��", //animationName
        "RunDash", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���܂���s", //animationName
        "WalkBury", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���܂�W�����vA", //animationName
        "WalkBuryJumpLow", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���܂�W�����vB", //animationName
        "WalkBuryJumpLow2", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���܂�E�o�W�����v", //animationName
        "WalkBuryJumpHi", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�Ԃ�", //animationName
        "Press", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�Ԃꕜ�A", //animationName
        "PressRecover", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�Ԃ����", //animationName
        "Jump", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�u���[�L", //animationName
        "Brake", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�u���[�L���菰", //animationName
        "Run", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�^�[���u���[�L", //animationName
        "Turn", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�^�[���u���[�L���菰", //animationName
        "Run", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���s�����u���[�L", //animationName
        "RunEnd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�㊵�����s", //animationName
        "Brake", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X��͍s��", //animationName
        "SkateL", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X��͍s�E", //animationName
        "SkateR", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X��ؑ֍�", //animationName
        "SkateSwitchL", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X��ؑ։E", //animationName
        "SkateSwitchR", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X���s��", //animationName
        "SkateBackL", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X���s�E", //animationName
        "SkateBackR", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X��^�[��", //animationName
        "SkateTurn", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���Ⴊ��", //animationName
        "SquatWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���Ⴊ�݊J�n", //animationName
        "SquatStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���Ⴊ�ݏI��", //animationName
        "SquatEnd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�₷�ׂ��������Ԃ�", //animationName
        "SlideStmach", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�₷�ׂ������I��", //animationName
        "SlideStmachEnd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�₷�ׂ艺�����I��", //animationName
        "SlideHipEnd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����E�G�C�g1A", //animationName
        "Sleep", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����E�G�C�g1B", //animationName
        "SleepLie", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�퓬�E�G�C�g", //animationName
        "BattleWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "��]", //animationName
        "Run", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�Ђ낢", //animationName
        "CarryStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�Ђ낢��", //animationName
        "CarryAirStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�Ђ낢�N�C�b�N", //animationName
        "CarryStartShort", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�Ђ낢�E�G�C�g", //animationName
        "CarryWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�J�u����", //animationName
        "PullOut", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�J�u�E�G�C�g", //animationName
        "PullOutWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n���}�[������]��", //animationName
        "Swing", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n���}�[���������[�X", //animationName
        "SwingThrow", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�R�C���Q�b�g", //animationName
        "CoinGet", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�p���`", //animationName
        "Spin2nd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "��p���`", //animationName
        "Spin2nd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���p���`", //animationName
        "Spin2nd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����p���`", //animationName
        "Spin2nd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�����j���O�L�b�N", //animationName
        "Kick", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�A�b�p�[�p���`", //animationName
        "Jump", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���Ⴊ�݃A�b�p�[", //animationName
        "SquatEnd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�T�}�[�\���g", //animationName
        "SpinLow", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����", //animationName
        "Throw", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t�@�C�A����", //animationName
        "Throw", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���蓊��", //animationName
        "ThrowBoth", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t�@�C�A�X�s��", //animationName
        "FireSpin", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t�@�C�A�X�s����", //animationName
        "FireSpin", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�R���܂�J�n", //animationName
        "HangStartUnder", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�R���܂蒆", //animationName
        "HangWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�R���܂�I��", //animationName
        "HangUp", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�R���܂�I����", //animationName
        "HangUp", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�R���܂�~��", //animationName
        "HangStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���Ⴊ�݃W�����v", //animationName
        "JumpBack", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���Ⴊ�݃W�����v���n", //animationName
        "JumpBackLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���Ⴊ�ݕ���", //animationName
        "SquatWalk", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����΂葖��", //animationName
        "RunSlope", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���΂��W�����v", //animationName
        "SlideStomachRecover", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�K����W�����v", //animationName
        "SlideHipRecover", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "������������", //animationName
        "RunSlope", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���������ӂ�΂�", //animationName
        "Stagger", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���̏ꑫ���ݏ㔼�g", //animationName
        "Walk", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�E�G�C�g", //animationName
        "SwimWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j��~��", //animationName
        "SwimBreast", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�����~��", //animationName
        "SwimBreastSurface", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j����", //animationName
        "SwimDive", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�W�����v�_�C�u", //animationName
        "LandWater", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�W�����v�_�C�u��]", //animationName
        "LandWaterDive", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�㏸�ċz", //animationName
        "SwimRise", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j���ʏ����ړ�", //animationName
        "SwimStartSurface", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����X�s��", //animationName
        "SwimSpinSurface", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�X�s��", //animationName
        "SwimSpin", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�X�s���ړ�", //animationName
        "SwimSpinAttack", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����X�s���ړ�", //animationName
        "SwimSpinAttackSurface", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�X�s���W�����v", //animationName
        "SwimJump", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�_���[�W", //animationName
        "SwimDamageSmall", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�_���[�W�T", //animationName
        "SwimFlutterBoardDamageSmall", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�_���[�W��", //animationName
        "SwimDamageMiddle", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����_���[�W��", //animationName
        "SwimDamageMiddleSurface", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����_���[�W����", //animationName
        "SwimDamageMiddleSurfaceLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�W�F�b�g", //animationName
        "SwimFlutterboard", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�W�F�b�g�I��", //animationName
        "SwimDamageMiddle", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�T����", //animationName
        "SwimFlutterboardThrow", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�W�F�b�g�J�n", //animationName
        "SwimFlutterboardStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�W�F�b�g�ǃ^�[��", //animationName
        "SwimFlutterboardTurn", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�_�E��", //animationName
        "SwimDie", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�^�[����", //animationName
        "SwimTurnL", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�^�[���E", //animationName
        "SwimTurnR", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�ǃq�b�g", //animationName
        "SwimWallHit", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j�^�[����", //animationName
        "SwimTurnForward", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���j����������", //animationName
        "SlideStmachEnd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "��э��ݏ���", //animationName
        "DiveWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "��э��݃W�����v", //animationName
        "Dive", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�����э��݃W�����v", //animationName
        "DiveBack", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "��э��ݎ��s���n", //animationName
        "Land", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "��э��ݎ��s��]���n", //animationName
        "LandRotation", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�����O�_�b�V��", //animationName
        "SwimDashRing", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�����O�_�b�V������", //animationName
        "SwimDashRingStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�J�����������O����", //animationName
        "SwimFlutterBoardDashRingStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�J�����������O", //animationName
        "SwimFlutterBoardDashRing", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�����O�i", //animationName
        "SwimGetUp", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�O�����_���[�W", //animationName
        "DamageSmallFront", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "������_���[�W", //animationName
        "DamageSmallBack", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�����W�����v", //animationName
        "Rise", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���_���[�W", //animationName
        "DamageMiddleFront", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���_���[�W��", //animationName
        "DamageMiddleFrontAir", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���_���[�W���n", //animationName
        "DamageMiddleFrontLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����_���[�W", //animationName
        "DamageMiddleBack", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����_���[�W��", //animationName
        "DamageMiddleBackAir", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����_���[�W���n", //animationName
        "DamageMiddleBackLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���_���[�W", //animationName
        "DamageFire", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�m�[�_���[�W", //animationName
        "DamageBit", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���̃����i�[", //animationName
        "FireRun", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t�@�C�A�����O��", //animationName
        "FireRunStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�d�C�_���[�W", //animationName
        "DamageElectric", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�d�C�_���[�W�I��", //animationName
        "DamageElectricEnd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�t�@�C�A�_���X", //animationName
        "FireRun", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�_���[�W", //animationName
        "DamageStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�_���[�W���n", //animationName
        "Land", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�_���[�W�E�G�C�g", //animationName
        "DamageWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�m�[�}���E�G�C�g", //animationName
        "Wait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X��", //animationName
        "Freeze", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X������", //animationName
        "IceFlick", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���т�", //animationName
        "DamageNumb", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���т��", //animationName
        "DamageNumbEnd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�͂˂Ƃ΂���", //animationName
        "DamageFlick", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�͂˂Ƃ΂���I��", //animationName
        "DamageFlickEnd", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "��]�ӂ��Ƃ�", //animationName
        "DamageWeakFront", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "��]�ӂ��Ƃы�", //animationName
        "DamageWeakFrontAir", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "��]�ӂ��Ƃђ��n", //animationName
        "DamageWeakFrontLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����_�E��", //animationName
        "DieSit", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���d�_�E��", //animationName
        "DieElectric", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���_�E��", //animationName
        "DieFire", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�����_�E��", //animationName
        "DieOver", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�낹�_�E��", //animationName
        "DieUnder", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�ޗ��_�E��", //animationName
        "DieFall", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�u���b�N�z�[������", //animationName
        "DieBlackHole", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�Ԃ�_�E��", //animationName
        "DieSit", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�Q�[���I�[�o�[", //animationName
        "DieOver", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���[�X����", //animationName
        "DieEvent", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�������[�X����", //animationName
        "DieSwimEvent", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���܂�_�E��", //animationName
        "DieBury", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�e�j�X�V���b�g��", //animationName
        "TennisShotL", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�e�j�X�V���b�g�E", //animationName
        "TennisShotR", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�e�j�X�V���b�g��", //animationName
        "TennisShotM", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�e�j�X�V���b�g��", //animationName
        "TennisShotAir", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�e�j�X�E�G�C�g", //animationName
        "TennisWait", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�G�������g�Q�b�g", //animationName
        "ElementGet", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�G�������g�Q�b�g�ڒn��", //animationName
        "ElementGetGround", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�󒆂Ђ˂�", //animationName
        "Spin", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n��Ђ˂�", //animationName
        "SpinGround", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�A�C�X�Ђ˂�", //animationName
        "IceSpin", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�A�C�X�Ђ˂�ړ�", //animationName
        "IceSkateSpin", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�A�C�X�Ђ˂�Î~", //animationName
        "IceSpin", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�X�s����", //animationName
        "BeeSpin", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�n�`�X�s��", //animationName
        "BeeSpinGround", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�A�C�X�Ђ˂��", //animationName
        "IceSpinAir", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�P�[�g�A�N�Z���W�����v", //animationName
        "IceJump", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�P�[�g�W�����v2", //animationName
        "IceJump2", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�P�[�g�W�����v3", //animationName
        "IceJump3", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�P�[�g���n", //animationName
        "IceJumpLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�P�[�g�Î~���n", //animationName
        "IceJumpStopLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�T�[�t�B���W�����v", //animationName
        "SurfJump", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�T�[�t�B���n�C�W�����v", //animationName
        "SurfJumpHigh", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�T�[�t�B�����n", //animationName
        "SurfLand", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "����", //animationName
        "Watch", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���[�X����", //animationName
        "Watch", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�e�[�W�C��A", //animationName
        "StageStartGround", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�e�[�W�C��B", //animationName
        "LandScenarioStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�E�H�[�N�C��", //animationName
        "GoThrough", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���Q�b�g[�f��1]", //animationName
        "DemoGetPower", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���Q�b�g[��b1]", //animationName
        "DemoGetPower", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���Q�b�g[�f��2]", //animationName
        "DemoGetPower", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���Q�b�g[��b2]", //animationName
        "DemoGetPower", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���Q�b�g[�f��3]", //animationName
        "DemoGetPower", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���Q�b�g[��b3]", //animationName
        "DemoGetPower", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���Q�b�g[�f��4]", //animationName
        "DemoGetPower", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���Q�b�g[�f��5]", //animationName
        "DemoGetPower", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���Q�b�g[��b4]", //animationName
        "DemoGetPower", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���Q�b�g[�f��6]", //animationName
        "DemoGetPower", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���Q�b�g[�f��7]", //animationName
        "DemoGetPower", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�X�s���Q�b�g[�f��8]", //animationName
        "DemoGetPower", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���[�X�J�n", //animationName
        "RaceStart", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "���[�X�N���E�`���O�J�n", //animationName
        "RaceStartCrouch", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�S�[�X�g���[�X�J�n", //animationName
        "RaceStartGhost", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�S�[�X�g����", //animationName
        "WinGhost", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "�S�[�X�g�o��", //animationName
        "AppearGhost", //fileName
        0, // animationHash
        0, // fileHash
    },
    {
        "", //animationName
        "", //fileName
        0, // animationHash
        0, // fileHash
    },
};

XanimeGroupInfo marioAnimeTable[0x134] = {
    {
        "��{", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���Ⴊ�݊�{", // _0
        1.00000f, // _4
        0x2, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j��{", // _0
        1.00000f, // _4
        0x1e, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�e�j�X��{", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�⍶�E�E�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��O��E�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�⍶�E�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��E�E�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��O�E�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���E�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���s", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�ݍs", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���^���_�b�V��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�_�b�V���W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��т�����W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�V���[�g�W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���܂���s", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���܂�W�����vA", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���܂�W�����vB", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���܂�E�o�W�����v", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t���n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���Ⴊ��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�u���[�L", // _0
        1.00000f, // _4
        0x4, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�u���[�L���菰", // _0
        4.00000f, // _4
        0x4, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�^�[���u���[�L", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�^�[���u���[�L���菰", // _0
        3.00000f, // _4
        0x4, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���s�����u���[�L", // _0
        1.00000f, // _4
        0x4, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�㊵�����s", // _0
        1.00000f, // _4
        0x10, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X��͍s��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X��͍s�E", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X��ؑ֍�", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X��ؑ։E", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X���s��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X���s�E", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X��^�[��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����E�G�C�g1A", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����E�G�C�g1B", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�퓬�E�G�C�g", // _0
        1.00000f, // _4
        0x1e, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�����O�i", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�W�����v", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�W�����vB", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�W�����vC", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�^�[���W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t���[�W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�W�����v�ӂ�1", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�W�����v�ӂ�2", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�W�����v�ӂ�3", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�����߂�", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�����߂����n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�|�b�h���[�v�J�n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�|�b�h���[�v�I��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�J�C���u�W�����v", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�󒆈��]", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�P�L��", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�P�L���E�o", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���܂�", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���܂�E�o", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�z�b�p�[�W�����vA", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�z�b�p�[�W�����vB", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�z�b�p�[�ӂ݃W�����vA", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�z�b�p�[�ӂ݃W�����vB", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�z�b�p�[�ړ�A", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�z�b�p�[�ړ�B", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�z�b�p�[�n�C�W�����vA", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�z�b�p�[�n�C�W�����vB", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�z�b�p�[�ǃW�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�z�b�p�[�q�b�v�h���b�v�J�n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�z�b�p�[�q�b�v�h���b�v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���Ƃ�", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�q�b�v�h���b�v�J�n", // _0
        1.00000f, // _4
        0x2, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�q�b�v�h���b�v", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�q�b�v�h���b�v���n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�q�b�v�h���b�v����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�W�����v������", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�W�����v�t����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X���b�v�A�b�v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���܂�X���b�v�A�b�v����", // _0
        1.00000f, // _4
        0x4, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���܂�X���b�v�A�b�v", // _0
        1.00000f, // _4
        0x2, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���q�b�v�h���b�v�J�n", // _0
        1.00000f, // _4
        0x2, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���q�b�v�h���b�v", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���q�b�v�h���b�v���n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����", // _0
        1.00000f, // _4
        0xf, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���n", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���nB", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�[�h���n", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���ׂ蒅�n", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�V���[�g���n", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`��s��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`��s��������", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�ǂ�����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�ǂ�������", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�ǃW�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�����E�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�����O�i", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�������n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�Ԉړ�", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�q�b�v�h���b�v�J�n", // _0
        1.00000f, // _4
        0x2, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�q�b�v�h���b�v", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�q�b�v�h���b�v���n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�q�b�v�h���b�v�ǒ��n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t�[�t�@�C�^�[��s�J�n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t�[�t�@�C�^�[��s", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t�[�t�@�C�^�[��s�ĊJ", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t�[�t�@�C�^�[�Î~", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t�[�t�@�C�^�[����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t�[�t�@�C�^�[���n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t�[�t�@�C�^�[�X�s��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�D�ᑬ���s", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�D�������s", // _0
        2.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�ǂ�����", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�ǂ��ׂ�", // _0
        1.00000f, // _4
        0xa, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�ǃW�����v", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�ǉ���", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�Ǎ�����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�ǉE����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�ǃE�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�O�ǃE�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�ǃq�b�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�ǃq�b�g���n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�ǂ͂���", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�_���[�W", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�_���[�W���n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�_���[�W�E�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�m�[�}���E�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X��", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X������", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���т�", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���т��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�R�C���Q�b�g", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�p���`", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��p���`", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���p���`", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����p���`", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�����j���O�L�b�N", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�A�b�p�[�p���`", // _0
        1.00000f, // _4
        0x3, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���Ⴊ�݃A�b�p�[", // _0
        1.00000f, // _4
        0x3, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�T�}�[�\���g", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�Q�[���I�[�o�[", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�Ԃ�", // _0
        0.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�Ԃꕜ�A", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�Ԃ����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��]", // _0
        4.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�₷�ׂ��������Ԃ�", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�₷�ׂ艺���������ނ�", // _0
        2.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "������������", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���������ӂ�΂�", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�T�[�t�B��", // _0
        1.00000f, // _4
        0xf, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�T�[�t�B���i�����j", // _0
        1.00000f, // _4
        0xf, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�T�[�t�B���X���J�n", // _0
        1.00000f, // _4
        0x4, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�T�[�t�B���X���J�n�i�����j", // _0
        1.00000f, // _4
        0x4, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�T�[�t�B���W�����v", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�T�[�t�B���n�C�W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�T�[�t�B������", // _0
        1.00000f, // _4
        0xf, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�T�[�t�B�����n", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�^�}�R���ړ�", // _0
        1.00000f, // _4
        0xf, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�^�}�R�����Ⴊ��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X���C�_�[�K", // _0
        2.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���̏ꑫ����", // _0
        1.00000f, // _4
        0x2, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���̏ꑫ���ݏ㔼�g", // _0
        1.00000f, // _4
        0x4, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j��~��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�����~��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�W�����v�_�C�u", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�W�����v�_�C�u��]", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�㏸�ċz", // _0
        1.00000f, // _4
        0x10, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j���ʏ����ړ�", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����X�s��", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�X�s��", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�X�s���ړ�", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����X�s���ړ�", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�_���[�W", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�_���[�W�T", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�_���[�W��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����_���[�W��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����_���[�W����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�_�E��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�^�[����", // _0
        1.00000f, // _4
        0x14, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�^�[���E", // _0
        1.00000f, // _4
        0x14, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�^�[����", // _0
        1.00000f, // _4
        0x14, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�E�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�W�F�b�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�W�F�b�g�J�n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�W�F�b�g�I��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�T����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�ǃq�b�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�W�F�b�g�ǃ^�[��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j����������", // _0
        1.00000f, // _4
        0x10, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��э��ݏ���", // _0
        1.00000f, // _4
        0x14, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��э��݃W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�����э��݃W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��э��ݎ��s���n", // _0
        1.00000f, // _4
        0xf, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��э��ݎ��s��]���n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���j�X�s���W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�����O�_�b�V��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�����O�_�b�V������", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�J�����������O����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�J�����������O", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���nC", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���n�^�[��", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���n���Ƃ�", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���Ⴊ�݊J�n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���Ⴊ�ݏI��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�₷�ׂ������I��", // _0
        1.00000f, // _4
        0x4, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�₷�ׂ艺�����I��", // _0
        1.00000f, // _4
        0x4, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�Ђ낢", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�Ђ낢��", // _0
        1.00000f, // _4
        0x3, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�Ђ낢�N�C�b�N", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�Ђ낢�E�G�C�g", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�J�u����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�J�u�E�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n���}�[������]��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n���}�[���������[�X", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t�@�C�A����", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���蓊��", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t�@�C�A�X�s��", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t�@�C�A�X�s����", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�R���܂�J�n", // _0
        1.00000f, // _4
        0x5, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�R���܂蒆", // _0
        1.00000f, // _4
        0x5, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�R���܂�I��", // _0
        1.00000f, // _4
        0x4, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�R���܂�I����", // _0
        1.00000f, // _4
        0x4, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�R���܂�~��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�R�ӂ�΂�", // _0
        1.00000f, // _4
        0x2, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���Ⴊ�݃W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���Ⴊ�݃W�����v���n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���Ⴊ�ݕ���", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����΂葖��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���΂��W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�K����W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�O�����_���[�W", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "������_���[�W", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�����W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�w���R�v�^�[�W�����v", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���_���[�W", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���_���[�W��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���_���[�W���n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����_���[�W", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����_���[�W��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����_���[�W���n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�m�[�_���[�W", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���_���[�W", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���̃����i�[", // _0
        8.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t�@�C�A�����O��", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�d�C�_���[�W", // _0
        1.00000f, // _4
        0x1, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�d�C�_���[�W�I��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�t�@�C�A�_���X", // _0
        6.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��]�ӂ��Ƃ�", // _0
        1.00000f, // _4
        0x2, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��]�ӂ��Ƃы�", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "��]�ӂ��Ƃђ��n", // _0
        1.00000f, // _4
        0x2, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����_�E��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���d�_�E��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���_�E��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�����_�E��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�낹�_�E��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�ޗ��_�E��", // _0
        1.00000f, // _4
        0x14, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�u���b�N�z�[������", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���[�X����", // _0
        1.00000f, // _4
        0xf, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�������[�X����", // _0
        1.00000f, // _4
        0xf, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���܂�_�E��", // _0
        1.00000f, // _4
        0x1e, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�Ԃ�_�E��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�͂˂Ƃ΂���", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�͂˂Ƃ΂���I��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�e�j�X�V���b�g��", // _0
        1.25000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�e�j�X�V���b�g�E", // _0
        1.25000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�e�j�X�V���b�g��", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�e�j�X�V���b�g��", // _0
        1.25000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�e�j�X�E�G�C�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�G�������g�Q�b�g", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�G�������g�Q�b�g�ڒn��", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�󒆂Ђ˂�", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n��Ђ˂�", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�X�s��", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�n�`�X�s����", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�A�C�X�Ђ˂�", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�A�C�X�Ђ˂�ړ�", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�A�C�X�Ђ˂�Î~", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�A�C�X�Ђ˂��", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�P�[�g�A�N�Z���W�����v", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�P�[�g�W�����v2", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�P�[�g�W�����v3", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�P�[�g���n", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�P�[�g�Î~���n", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���[�X����", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�J���J�����E", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�e�[�W�C��A", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�e�[�W�C��B", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�E�H�[�N�C��", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���Q�b�g[�f��1]", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���Q�b�g[��b1]", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���Q�b�g[�f��2]", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���Q�b�g[��b2]", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���Q�b�g[�f��3]", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���Q�b�g[��b3]", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���Q�b�g[�f��4]", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���Q�b�g[�f��5]", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���Q�b�g[��b4]", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���Q�b�g[�f��6]", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���Q�b�g[�f��7]", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�X�s���Q�b�g[�f��8]", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���[�X�J�n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "���[�X�N���E�`���O�J�n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�S�[�X�g���[�X�J�n", // _0
        1.00000f, // _4
        0x6, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�S�[�X�g����", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "�S�[�X�g�o��", // _0
        1.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    },
    {
        "", // _0
        0.00000f, // _4
        0, // _8
        0.00000f, // _C
        0.00000f, // _10
        0.00000f, // _14
        0, // _18
        0, // _1C
        0, // _1D
        {
            0,
            0,
            0,
            0,
        }, // _20
        {
            0.00000f,
            0.00000f,
            0.00000f,
            0.00000f,
        }, // _30
        0, // _40
        0, // _44
        nullptr, // _48
    }
};

XanimeAuxInfo marioAnimeAuxTable[1] = {
    {""}
};

XanimeOfsInfo marioAnimeOfsTable[35] = {
    {
        "�_���[�W", //animationName
        0.00000f, // _4
        10.0000f, // _8
        10.0000f, // _C
        0x1, // _10
    },
    {
        "�₷�ׂ艺���������ނ�", //animationName
        0.00000f, // _4
        2.00000f, // _8
        2.00000f, // _C
        0x1, // _10
    },
    {
        "�₷�ׂ��������Ԃ�", //animationName
        0.00000f, // _4
        2.00000f, // _8
        2.00000f, // _C
        0x1, // _10
    },
    {
        "�^�[���u���[�L", //animationName
        0.00000f, // _4
        20.0000f, // _8
        20.0000f, // _C
        0x1, // _10
    },
    {
        "�W�����v", //animationName
        0.00000f, // _4
        24.0000f, // _8
        24.0000f, // _C
        0x1, // _10
    },
    {
        "�ǃq�b�g", //animationName
        0.00000f, // _4
        25.0000f, // _8
        25.0000f, // _C
        0x1, // _10
    },
    {
        "�ǃq�b�g���n", //animationName
        0.00000f, // _4
        67.0000f, // _8
        0.00000f, // _C
        0, // _10
    },
    {
        "�J�u����", //animationName
        0.00000f, // _4
        49.0000f, // _8
        49.0000f, // _C
        0x1, // _10
    },
    {
        "����", //animationName
        0.00000f, // _4
        29.0000f, // _8
        29.0000f, // _C
        0x1, // _10
    },
    {
        "�q�b�v�h���b�v�J�n", //animationName
        0.00000f, // _4
        13.0000f, // _8
        13.0000f, // _C
        0x1, // _10
    },
    {
        "�q�b�v�h���b�v", //animationName
        0.00000f, // _4
        9.00000f, // _8
        9.00000f, // _C
        0x1, // _10
    },
    {
        "�X�s���q�b�v�h���b�v", //animationName
        0.00000f, // _4
        19.0000f, // _8
        19.0000f, // _C
        0x1, // _10
    },
    {
        "�n�`�q�b�v�h���b�v�ǒ��n", //animationName
        0.00000f, // _4
        20.0000f, // _8
        20.0000f, // _C
        0, // _10
    },
    {
        "�z�b�p�[�ӂ݃W�����vA", //animationName
        10.0000f, // _4
        50.0000f, // _8
        0.00000f, // _C
        0x1, // _10
    },
    {
        "�z�b�p�[�ӂ݃W�����vB", //animationName
        10.0000f, // _4
        50.0000f, // _8
        0.00000f, // _C
        0x1, // _10
    },
    {
        "�e�j�X�V���b�g��", //animationName
        4.00000f, // _4
        26.0000f, // _8
        26.0000f, // _C
        0, // _10
    },
    {
        "�e�j�X�V���b�g�E", //animationName
        4.00000f, // _4
        26.0000f, // _8
        26.0000f, // _C
        0, // _10
    },
    {
        "�e�j�X�V���b�g��", //animationName
        3.00000f, // _4
        38.0000f, // _8
        38.0000f, // _C
        0, // _10
    },
    {
        "�e�j�X�V���b�g��", //animationName
        5.00000f, // _4
        26.0000f, // _8
        26.0000f, // _C
        0, // _10
    },
    {
        "���̏ꑫ����", //animationName
        0.00000f, // _4
        17.0000f, // _8
        8.00000f, // _C
        0, // _10
    },
    {
        "�u���[�L", //animationName
        0.00000f, // _4
        2.00000f, // _8
        0.00000f, // _C
        0x1, // _10
    },
    {
        "�V���[�g���n", //animationName
        0.00000f, // _4
        5.00000f, // _8
        0.00000f, // _C
        0, // _10
    },
    {
        "�A�b�p�[�p���`", //animationName
        22.0000f, // _4
        23.0000f, // _8
        0.00000f, // _C
        0x1, // _10
    },
    {
        "���Ⴊ�݃A�b�p�[", //animationName
        0.00000f, // _4
        6.00000f, // _8
        0.00000f, // _C
        0, // _10
    },
    {
        "�X�P�L��", //animationName
        0.00000f, // _4
        59.0000f, // _8
        30.0000f, // _C
        0x2, // _10
    },
    {
        "�X�P�L���E�o", //animationName
        60.0000f, // _4
        120.000f, // _8
        0.00000f, // _C
        0, // _10
    },
    {
        "����E�G�C�g1A", //animationName
        0.00000f, // _4
        494.000f, // _8
        375.000f, // _C
        0x2, // _10
    },
    {
        "����E�G�C�g1B", //animationName
        0.00000f, // _4
        254.000f, // _8
        135.000f, // _C
        0x2, // _10
    },
    {
        "�A�C�X�Ђ˂�", //animationName
        0.00000f, // _4
        35.0000f, // _8
        35.0000f, // _C
        0, // _10
    },
    {
        "�t�@�C�A�X�s����", //animationName
        0.00000f, // _4
        30.0000f, // _8
        30.0000f, // _C
        0, // _10
    },
    {
        "�R���܂�I����", //animationName
        0.00000f, // _4
        27.0000f, // _8
        27.0000f, // _C
        0, // _10
    },
    {
        "�O�ǃE�G�C�g", //animationName
        57.0000f, // _4
        59.0000f, // _8
        57.0000f, // _C
        0x1, // _10
    },
    {
        "�t�[�t�@�C�^�[�Î~", //animationName
        0.00000f, // _4
        159.000f, // _8
        40.0000f, // _C
        0x2, // _10
    },
    {
        "�Ђ낢�N�C�b�N", //animationName
        0.00000f, // _4
        26.0000f, // _8
        0.00000f, // _C
        0x1, // _10
    },
    {
        "", //animationName
        0.00000f, // _4
        0.00000f, // _8
        0.00000f, // _C
        0, // _10
    },
};

XanimeSwapTable luigiAnimeSwapTable[14] = {
    {"Run", "LuigiRun"},
    {"Jump", "LuigiJump"},
    {"JumpRoll", "LuigiJumpRoll"},
    {"JumpBack", "LuigiJumpBack"},
    {"RunEnd", "LuigiRunEnd"},
    {"Spin", "LuigiSpin"},
    {"SpinGround", "LuigiSpinGround"},
    {"SpaceFlyShort", "LuigiSpaceFlyShort"},
    {"Wait", "LuigiWait"},
    {"WaitSlopeL", "LuigiWaitSlopeL"},
    {"WaitSlopeR", "LuigiWaitSlopeR"},
    {"WaitSlopeU", "LuigiWaitSlopeU"},
    {"WaitSlopeD", "LuigiWaitSlopeD"},
    {"", nullptr},
};
